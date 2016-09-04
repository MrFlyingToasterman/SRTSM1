package dmusiolik.ajcbk_vp;

import android.support.annotation.RequiresPermission;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
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

}
