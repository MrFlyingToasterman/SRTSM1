package dmusiolik.ajcbk_vp;

import android.app.AlertDialog;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.view.View;
import android.widget.TextView;

public class LoginActivity extends AppCompatActivity {

    public static int counter = 0;
    public static String benutzer = null;
    public static String passwort = null;
    //public static final String myPref = "username";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_login);

        TextView loginbox = (TextView) findViewById(R.id.email);
        TextView passbox = (TextView) findViewById(R.id.password);

        if (getPreferenceValue("username").equals("TheDefaultValueIfNoValueFoundOfThisKey")) {
            //Nichts Unternemen
        }else{
            loginbox.setText(getPreferenceValue("username"));
        }

        if (getPreferenceValue("password").equals("TheDefaultValueIfNoValueFoundOfThisKey")) {
            //Nichts Unternemen
        }else{
            passbox.setText(getPreferenceValue("password"));
        }
    }

    public static void anmeldungalt(View v) {

    }

    public String getPreferenceValue(String myPref) {
        SharedPreferences sp = getSharedPreferences(myPref,0);
        String str = sp.getString("myStore","TheDefaultValueIfNoValueFoundOfThisKey");
        return str;
    }

    public void writeToPreference(String thePreference, String myPref) {
        SharedPreferences.Editor editor = getSharedPreferences(myPref,0).edit();
        editor.putString("myStore", thePreference);
        editor.commit();
    }

    public void anmeldung(View view) {

        TextView loginbox = (TextView) findViewById(R.id.email);
        TextView passbox = (TextView) findViewById(R.id.password);

        System.out.println("Lese ACJBK Benutzernamen >" + loginbox.getText() + "<");
        System.out.println("Ostereizähler >" + counter + "<");

        String logindata;
        logindata = loginbox.getText().toString();

        if (logindata.equals("")) {
            //Fehler
            if (counter == 0) {
                loginbox.setError("Sie Sir brauchen einen Account!");
                counter++;
                return;
            }
            if (counter == 1) {
                loginbox.setError("Ich verhandel nicht mit Ihnen!");
                counter++;
                return;
            }
            if (counter == 2) {
                loginbox.setError("Hallo ?! Das Feld darf nicht leer sein!");
                counter++;
                return;
            }
            if (counter == 3) {
                loginbox.setError("Verdammt! Trag einfach deinen Namen ein!!");
                counter = 0;
                return;
            }

        }
            //Benutzername und Passwort einlesen, speichern und weitergeben
            benutzer = loginbox.getText().toString();
            writeToPreference(benutzer, "username");
            passwort = passbox.getText().toString();
            writeToPreference(passwort, "password");

            //Zweite Activity öffnen
            Intent myIntent=new Intent(view.getContext(),MainActivity.class);
            startActivity(myIntent);
            finish();
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
                alertDialog.setMessage("SRTSM1\n\nThis is Free (as in freedom) Software. Written by Darius Musiolik 2k16.\nBut not Copyrighted or anything!\nFeel free to copy, fork or do what ever you want with my code. You don't have to credit me in your fork:\n\nhttps://www.GitHub.com/MrFlyingToasterman\n" +
                        "\n" +
                        "\n" +
                        "Development in order by SR GmbH.");
                alertDialog.show();
                return true;
            default:
                return super.onOptionsItemSelected(item);
        }
    }
}
