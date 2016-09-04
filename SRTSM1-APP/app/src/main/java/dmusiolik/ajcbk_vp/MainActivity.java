package dmusiolik.ajcbk_vp;

import android.app.AlertDialog;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.webkit.HttpAuthHandler;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    String benutzer = LoginActivity.benutzer;
    WebView browser;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        browse();
    }

    public void reload(View view) {
        Log.d("SRTSM1","Reload Button");

        Toast.makeText(getApplicationContext(), "Lade neue Daten", Toast.LENGTH_LONG).show();

        browse();
    }

    public void browse() {
        browser = (WebView) findViewById(R.id.webViewIV);
        browser.getSettings().setJavaScriptEnabled(true);
        browser.getSettings().setJavaScriptCanOpenWindowsAutomatically(false);
        browser.getSettings().setSupportMultipleWindows(false);
        browser.getSettings().setSupportZoom(false);
        browser.loadUrl("http://richter-wochenplan.ddns.net/" + benutzer + "/termine.html");
        //Parse htmlcode
        browser.setWebViewClient(new WebViewClient() {
            @Override
            public boolean shouldOverrideUrlLoading(WebView view, String url) {
                view.loadUrl(url);
                return true;
            }

            public void onReceivedHttpAuthRequest(WebView view,
                                                  HttpAuthHandler handler, String host, String realm) {

                handler.proceed(LoginActivity.benutzer, LoginActivity.passwort);

            }
        });

    }
    //Set up a Contextmenu
    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        MenuInflater inflater = getMenuInflater();
        inflater.inflate(R.menu.menu, menu);
        return true;
    }

    //Deal with Context
    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle item selection
        switch (item.getItemId()) {
            case R.id.about:
                //About informations
                AlertDialog alertDialog;
                alertDialog = new AlertDialog.Builder(this, AlertDialog.THEME_DEVICE_DEFAULT_DARK).create();
                alertDialog.setTitle("About");
                alertDialog.setMessage("SRTSM1\n\nThis is Free (as in freedom) Software. Written by Darius Musiolik 2k16.\nBut not Copyrighted or anything!\nFeel free to copy, fork or do what ever you want with my code. You don't have to credit me in your fork:\n\nhttps://www.GitHub.com/MrFlyingToasterman\n\n\nDevelopment in order by SR GmbH.");
                alertDialog.show();
                return true;
            default:
                return super.onOptionsItemSelected(item);
        }
    }

}
