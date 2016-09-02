/************************************                                            // If you mess with my code i will kill you
 *                                  *
 * File:   main.cpp                 *
 * Author: Pascal Peinecke          *
 *                                  *
 * Created on 12. Juli 2016, 10:41  *
 *                                  *
 ************************************

***************************************************************************************************
//   ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄       ▄▄     ▄▄▄▄       //
//  ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░▌     ▐░░▌  ▄█░░░░▌      //
//  ▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌ ▀▀▀▀█░█▀▀▀▀ ▐░█▀▀▀▀▀▀▀▀▀ ▐░▌░▌   ▐░▐░▌ ▐░░▌▐░░▌      //
//  ▐░▌          ▐░▌       ▐░▌▐░▌       ▐░▌     ▐░▌     ▐░▌          ▐░▌▐░▌ ▐░▌▐░▌  ▀▀ ▐░░▌      //
//  ▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌     ▐░▌     ▐░█▄▄▄▄▄▄▄▄▄ ▐░▌ ▐░▐░▌ ▐░▌     ▐░░▌      //
//  ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌     ▐░▌     ▐░░░░░░░░░░░▌▐░▌  ▐░▌  ▐░▌     ▐░░▌      //
//   ▀▀▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀█░█▀▀ ▐░█▀▀▀▀▀▀▀█░▌     ▐░▌      ▀▀▀▀▀▀▀▀▀█░▌▐░▌   ▀   ▐░▌     ▐░░▌      //
//            ▐░▌▐░▌     ▐░▌  ▐░▌       ▐░▌     ▐░▌               ▐░▌▐░▌       ▐░▌     ▐░░▌      //
//   ▄▄▄▄▄▄▄▄▄█░▌▐░▌      ▐░▌ ▐░▌       ▐░▌     ▐░▌      ▄▄▄▄▄▄▄▄▄█░▌▐░▌       ▐░▌ ▄▄▄▄█░░█▄▄▄   //
//  ▐░░░░░░░░░░░▌▐░▌       ▐░▌▐░▌       ▐░▌     ▐░▌     ▐░░░░░░░░░░░▌▐░▌       ▐░▌▐░░░░░░░░░░░▌  //
//   ▀▀▀▀▀▀▀▀▀▀▀  ▀         ▀  ▀         ▀       ▀       ▀▀▀▀▀▀▀▀▀▀▀  ▀         ▀  ▀▀▀▀▀▀▀▀▀▀▀   //
//************************************************************************************************/                                                                                                                                                                           

// Includes
#include <iostream>     // Standart Ausgabe Library
#include <string>       // Library für die Verwendung von Strings
#include <cstring>      // Benutzt zur Stringverketung (.c_str)
#include <stdio.h>      // Standart Eingabe/Ausgabe Library von C
#include <stdlib.h>     // Standartlibrary
#include <fstream>      // std::ofstream // Library für den FileReader/FileWriter
#include <cstdlib>      // C/C++ Standartlibrary
#include <dirent.h>     // Library für Verzeichnisbefehle
#include <sys/stat.h>   // Statistiken für dirent.h
#include <sys/types.h>  // Typen für dirent.h
#include <unistd.h>     // UnixStdHeader für File Access und Directory System Calls
#include <vector>
#include <algorithm> 
#include <iterator> 
#include <cstdio>
#include <list>

using namespace std;

/*
 * 
 */
// Grund Variablen
        string benutzer;
        string passwort;
        string globalpfad0 = "/srv/http/";   // pfad0 und globalpfad0 müssen immer identisch sein. globalpfad0 wird nur zur Löschung von Benutzern verwendet.
        string pfad0 = "/srv/http/";     // Ort für die Erstellung von Benutzern
        string pfad1 = "/termine.html";   // Datei in wecher Termine eingetragen werden sollen
        
        string text0;
        string text1;
        string text2;
        string samstag0;
        string samstag1;
        string samstag2;
        string samstag3;
        string samstag4;
        string montag0;
        string montag1;
        string montag2;
        string montag3;
        string montag4;
        string dienstag0;
        string dienstag1;
        string dienstag2;
        string dienstag3;
        string dienstag4;
        string mittwoch0;
        string mittwoch1;
        string mittwoch2;
        string mittwoch3;
        string mittwoch4;
        string donnerstag0;
        string donnerstag1;
        string donnerstag2;
        string donnerstag3;
        string donnerstag4;
        string freitag0;
        string freitag1;
        string freitag2;
        string freitag3;
        string freitag4;
        string textN;
                 
        
// Klasse Tage
class Tage {
    public:
             // Samstag Variabeln
            string Datum_Samstag;
            string Zeit_Samstag;
            string Ort_Samstag;
            string Zusatz_Samstag;
             // Montag Variablen
            string Datum_Montag;
            string Zeit_Montag;
            string Ort_Montag;
            string Zusatz_Montag;
             // Dienstag Variablen
            string Datum_Dienstag;
            string Zeit_Dienstag;
            string Ort_Dienstag;
            string Zusatz_Dienstag;
             // Mittwoch Variabeln
            string Datum_Mittwoch;
            string Zeit_Mittwoch;
            string Ort_Mittwoch;
            string Zusatz_Mittwoch;
             // Donnerstag Variabeln
            string Datum_Donnerstag;
            string Zeit_Donnerstag;
            string Ort_Donnerstag;
            string Zusatz_Donnerstag;
             // Freitag Variabeln
            string Datum_Freitag;
            string Zeit_Freitag;
            string Ort_Freitag;
            string Zusatz_Freitag;
            
    public:
              
        // Void Samstag in Klasse Tage
        void Samstag() {
            getchar();
            
            cout << "\033[2J\033[1;1H";
            cout << "\n\nBitte geben Sie das Datum für Samstag an: " << endl;
            // For Schleife mit cin.get um einen String mit Leerzeichen einzulesen.
            for(char c; cin.get(c), c!='\n'; Datum_Samstag+=c);
            cout << "->" << Datum_Samstag << "<- eingelesen." << endl;
            
            cout << "\n\nBitte geben Sie die Zeit für Samstag an: " << endl;
                for(char c; cin.get(c), c!='\n'; Zeit_Samstag+=c);
            cout << "->" << Zeit_Samstag << "<- eingelesen." << endl;

            cout << "\n\nBitte geben Sie den Ort für Samstag an: " << endl;
                for(char c; cin.get(c), c!='\n'; Ort_Samstag+=c);
            cout << "->" << Ort_Samstag << "<- eingelesen." << endl;

            cout << "\n\nBitte geben Sie den Zusatz für Samstag an: " << endl;
                for(char c; cin.get(c), c!='\n'; Zusatz_Samstag+=c);
            cout << "->" << Zusatz_Samstag << "<- eingelesen." << endl;
            
            // Variablen verketten..... 
            pfad0 = std::string(pfad0) + benutzer;
            pfad0 = std::string(pfad0) + pfad1;
        
            // Samstag Block
            samstag0 = "<tr>\n<td width=\"100px\">Samstag</td> <td width=\"100px\">";
            samstag1 = "</td> <td width=\"100px\">";
            samstag2 = "</td> <td width=\"500px\" >";
            samstag3 = "</td> <td width=\"150px\">";
            samstag4 = "</td>\n</tr>";
        
            // HTML Filewriter
            cout << "Pfad: " << pfad0 << endl;
            fstream Datenschreiber(pfad0.c_str(),fstream::in | fstream::out | fstream::app);
            Datenschreiber << samstag0;
            Datenschreiber << Datum_Samstag;
            Datenschreiber << samstag1;
            Datenschreiber << Zeit_Samstag;
            Datenschreiber << samstag2;
            Datenschreiber << Ort_Samstag;
            Datenschreiber << samstag3;
            Datenschreiber << Zusatz_Samstag;
            Datenschreiber << samstag4;
            Datenschreiber.close();
        }
        
        // Void Montag in Klasse Tage
        void Montag() {
            getchar();
            cout << "\033[2J\033[1;1H";
            cout << "\n\nBitte geben Sie das Datum für Montag an: " << endl;
            // For Schleife mit cin.get um einen String mit Leerzeichen einzulesen.
                for(char c; cin.get(c), c!='\n'; Datum_Montag+=c);
            cout << "->" << Datum_Montag << "<- eingelesen." << endl;

            cout << "\n\nBitte geben Sie die Zeit für Montag an: " << endl;
                for(char c; cin.get(c), c!='\n'; Zeit_Montag+=c);
            cout << "->" << Zeit_Montag << "<- eingelesen." << endl;

            cout << "\n\nBitte geben Sie den Ort für Montag an: " << endl;
                for(char c; cin.get(c), c!='\n'; Ort_Montag+=c);
            cout << "->" << Ort_Montag << "<- eingelesen." << endl;

            cout << "\n\nBitte geben Sie den Zusatz für Montag an: " << endl;
                for(char c; cin.get(c), c!='\n'; Zusatz_Montag+=c);
            cout << "->" << Zusatz_Montag << "<- eingelesen." << endl;
        
            // Variablen verketten..... 
            pfad0 = std::string(pfad0) + benutzer;
            pfad0 = std::string(pfad0) + pfad1;
        
            // Montag Block
            montag0 = "<tr>\n<td width=\"100px\">Montag</td> <td width=\"100px\">";
            montag1 = "</td> <td width=\"100px\">";
            montag2 = "</td> <td width=\"500px\" >";
            montag3 = "</td> <td width=\"150px\">";
            montag4 = "</td>\n</tr>";
        
            // HTML Filewriter
            cout << "Pfad: " << pfad0 << endl;
            ofstream Datenschreiber;
            Datenschreiber.open(pfad0.c_str(),fstream::in | fstream::out | fstream::app);
            
            Datenschreiber << montag0;
            Datenschreiber << Datum_Montag;
            Datenschreiber << montag1;
            Datenschreiber << Zeit_Montag;
            Datenschreiber << montag2;
            Datenschreiber << Ort_Montag;
            Datenschreiber << montag3;
            Datenschreiber << Zusatz_Montag;
            Datenschreiber << montag4;
            Datenschreiber.close();
        }
        
        // Void Dienstag in Klasse Tage
        void Dienstag() {
            getchar();
            cout << "\033[2J\033[1;1H";
            cout << "\n\nBitte geben Sie das Datum für Dienstag an: " << endl;
            // For Schleife mit cin.get um einen String mit Leerzeichen einzulesen.
                for(char c; cin.get(c), c!='\n'; Datum_Dienstag+=c);
            cout << "->" << Datum_Dienstag << "<- eingelesen." << endl;

            cout << "\n\nBitte geben Sie die Zeit für Dienstag an: " << endl;
                for(char c; cin.get(c), c!='\n'; Zeit_Dienstag+=c);
            cout << "->" << Zeit_Dienstag << "<- eingelesen." << endl;

            cout << "\n\nBitte geben Sie den Ort für Dienstag an: " << endl;
                for(char c; cin.get(c), c!='\n'; Ort_Dienstag+=c);
            cout << "->" << Ort_Dienstag << "<- eingelesen." << endl;

            cout << "\n\nBitte geben Sie den Zusatz für Dienstag an: " << endl;
                for(char c; cin.get(c), c!='\n'; Zusatz_Dienstag+=c);
            cout << "->" << Zusatz_Dienstag << "<- eingelesen." << endl;
        
            // Variablen verketten..... 
            pfad0 = std::string(pfad0) + benutzer;
            pfad0 = std::string(pfad0) + pfad1;
        
            // Dienstag Block
            dienstag0 = "<tr>\n<td width=\"100px\">Dienstag</td> <td width=\"100px\">";
            dienstag1 = "</td> <td width=\"100px\">";
            dienstag2 = "</td> <td width=\"400px\" >";
            dienstag3 = "</td> <td width=\"150px\">";
            dienstag4 = "</td>\n</tr>";
        
            // HTML Filewriter
            cout << "Pfad: " << pfad0 << endl;
            ofstream Datenschreiber;
            Datenschreiber.open(pfad0.c_str(),fstream::in | fstream::out | fstream::app);
            
            Datenschreiber << dienstag0;
            Datenschreiber << Datum_Dienstag;
            Datenschreiber << dienstag1;
            Datenschreiber << Zeit_Dienstag;
            Datenschreiber << dienstag2;
            Datenschreiber << Ort_Dienstag;
            Datenschreiber << dienstag3;
            Datenschreiber << Zusatz_Dienstag;
            Datenschreiber << dienstag4;
            Datenschreiber.close();
        }
        
        // Void Mittwoch in Klasse Tage
        void Mittwoch() {
            getchar();
            cout << "\033[2J\033[1;1H";
            cout << "\n\nBitte geben Sie das Datum für Mittwoch an: " << endl;
            // For Schleife mit cin.get um einen String mit Leerzeichen einzulesen.
                for(char c; cin.get(c), c!='\n'; Datum_Mittwoch+=c);
            cout << "->" << Datum_Mittwoch << "<- eingelesen." << endl;

            cout << "\n\nBitte geben Sie die Zeit für Mittwoch an: " << endl;
                for(char c; cin.get(c), c!='\n'; Zeit_Mittwoch+=c);
            cout << "->" << Zeit_Mittwoch << "<- eingelesen." << endl;

            cout << "\n\nBitte geben Sie den Ort für Mittwoch an: " << endl;
                for(char c; cin.get(c), c!='\n'; Ort_Mittwoch+=c);
            cout << "->" << Ort_Mittwoch << "<- eingelesen." << endl;

            cout << "\n\nBitte geben Sie den Zusatz für Mittwoch an: " << endl;
                for(char c; cin.get(c), c!='\n'; Zusatz_Mittwoch+=c);
            cout << "->" << Zusatz_Mittwoch << "<- eingelesen." << endl;
        
            // Variablen verketten..... 
            pfad0 = std::string(pfad0) + benutzer;
            pfad0 = std::string(pfad0) + pfad1;
        
            // Mittwoch Block
            mittwoch0 = "<tr>\n<td width=\"100px\">Mittwoch</td> <td width=\"100px\">";
            mittwoch1 = "</td> <td width=\"100px\">";
            mittwoch2 = "</td> <td width=\"400px\" >";
            mittwoch3 = "</td> <td width=\"150px\">";
            mittwoch4 = "</td>\n</tr>";
        
            // HTML Filewriter
            cout << "Pfad: " << pfad0 << endl;
            ofstream Datenschreiber;
            Datenschreiber.open(pfad0.c_str(),fstream::in | fstream::out | fstream::app);
          
            Datenschreiber << mittwoch0;
            Datenschreiber << Datum_Mittwoch;
            Datenschreiber << mittwoch1;
            Datenschreiber << Zeit_Mittwoch;
            Datenschreiber << mittwoch2;
            Datenschreiber << Ort_Mittwoch;
            Datenschreiber << mittwoch3;
            Datenschreiber << Zusatz_Mittwoch;
            Datenschreiber << mittwoch4;
            Datenschreiber.close();
        }
        
        // Void Donnerstag in Klasse Tage
        void Donnerstag() {
            getchar();
            cout << "\033[2J\033[1;1H";
            cout << "\n\nBitte geben Sie das Datum für Donnerstag an: " << endl;
            // For Schleife mit cin.get um einen String mit Leerzeichen einzulesen.
                for(char c; cin.get(c), c!='\n'; Datum_Donnerstag+=c);
            cout << "->" << Datum_Donnerstag << "<- eingelesen." << endl;

            cout << "\n\nBitte geben Sie die Zeit für Donnerstag an: " << endl;
                for(char c; cin.get(c), c!='\n'; Zeit_Donnerstag+=c);
            cout << "->" << Zeit_Donnerstag << "<- eingelesen." << endl;

            cout << "\n\nBitte geben Sie den Ort für Donnerstag an: " << endl;
                for(char c; cin.get(c), c!='\n'; Ort_Donnerstag+=c);
            cout << "->" << Ort_Donnerstag << "<- eingelesen." << endl;

            cout << "\n\nBitte geben Sie den Zusatz für Donnerstag an: " << endl;
                for(char c; cin.get(c), c!='\n'; Zusatz_Donnerstag+=c);
            cout << "->" << Zusatz_Donnerstag << "<- eingelesen." << endl;
        
            // Variablen verketten..... 
            pfad0 = std::string(pfad0) + benutzer;
            pfad0 = std::string(pfad0) + pfad1;
        
            // Donnerstag Block
            donnerstag0 = "<tr>\n<td width=\"100px\">Donnerstag</td> <td width=\"100px\">";
            donnerstag1 = "</td> <td width=\"100px\">";
            donnerstag2 = "</td> <td width=\"400px\" >";
            donnerstag3 = "</td> <td width=\"150px\">";
            donnerstag4 = "</td>\n</tr>";
        
            // HTML Filewriter
            cout << "Pfad: " << pfad0 << endl;
            ofstream Datenschreiber;
            Datenschreiber.open(pfad0.c_str(),fstream::in | fstream::out | fstream::app);
           
            Datenschreiber << donnerstag0;
            Datenschreiber << Datum_Donnerstag;
            Datenschreiber << donnerstag1;
            Datenschreiber << Zeit_Donnerstag;
            Datenschreiber << donnerstag2;
            Datenschreiber << Ort_Donnerstag;
            Datenschreiber << donnerstag3;
            Datenschreiber << Zusatz_Donnerstag;
            Datenschreiber << donnerstag4;
            Datenschreiber.close();
        }
        
        // Void Freitag in Klasse Tage
        void Freitag() {
            getchar();
            cout << "\033[2J\033[1;1H";
            cout << "\n\nBitte geben Sie das Datum für Freitag an: " << endl;
            // For Schleife mit cin.get um einen String mit Leerzeichen einzulesen.
                for(char c; cin.get(c), c!='\n'; Datum_Freitag+=c);
            cout << "->" << Datum_Freitag << "<- eingelesen." << endl;

            cout << "\n\nBitte geben Sie die Zeit für Freitag an: " << endl;
                for(char c; cin.get(c), c!='\n'; Zeit_Freitag+=c);
            cout << "->" << Zeit_Freitag << "<- eingelesen." << endl;

            cout << "\n\nBitte geben Sie den Ort für Freitag an: " << endl;
                for(char c; cin.get(c), c!='\n'; Ort_Freitag+=c);
            cout << "->" << Ort_Freitag << "<- eingelesen." << endl;

            cout << "\n\nBitte geben Sie den Zusatz für Freitag an: " << endl;
                for(char c; cin.get(c), c!='\n'; Zusatz_Freitag+=c);
            cout << "->" << Zusatz_Freitag << "<- eingelesen." << endl;
        
            // Variablen verketten..... 
            pfad0 = std::string(pfad0) + benutzer;
            pfad0 = std::string(pfad0) + pfad1;
	
            // Freitag Block
            freitag0 = "<tr>\n<td width=\"100px\">Freitag</td> <td width=\"100px\">";
            freitag1 = "</td> <td width=\"100px\">";
            freitag2 = "</td> <td width=\"400px\" >";
            freitag3 = "</td> <td width=\"150px\">";
            freitag4 = "</td>\n</tr>";
        
            // OBSOLETE zur Löschung vormerken
            textN = "\n</table>\n</body>\n\n</html>";
        
            // HTML Filewriter
            cout << "Pfad: " << pfad0 << endl;
            ofstream Datenschreiber;
            Datenschreiber.open(pfad0.c_str(),fstream::in | fstream::out | fstream::app);
           
            Datenschreiber << freitag0;
            Datenschreiber << Datum_Freitag;
            Datenschreiber << freitag1;
            Datenschreiber << Zeit_Freitag;
            Datenschreiber << freitag2;
            Datenschreiber << Ort_Freitag;
            Datenschreiber << freitag3;
            Datenschreiber << Zusatz_Freitag;
            Datenschreiber << freitag4;
            Datenschreiber.close();
        }
};

// Klasse InterfaceActions
class InterfaceActions {
    
public:
    // Void AddUser in Klasse InterfaceActions
    void AddUser() {
        cout << "\033[2J\033[1;1H";
        cout << "Username: " << endl;
        cin >> benutzer;
        // String verketten
        pfad0 = std::string(pfad0) + benutzer;
        
        // Pfad anlegen
        mkdir(pfad0.c_str(),S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
        
        // Variablen verketten..... 
            pfad0 = std::string(pfad0) + pfad1;
        
        // HTML Tabelle erzeugen
            text0 = "<!DOCTYPE html>\n<html>\n\n<head>\n<title>Terminplan</title>\n<meta charset=\"utf-8\">\n<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n<link rel=\"stylesheet\" href=\"https://maxcdn.bootstrapcdn.com/bootstrap/3.3.6/css/bootstrap.min.css\">\n<style>html,body{min-height:100%;height:100%;color:#FFF;background-image:url(\"http://2.1m.yt/zyV0NEe.jpg""\""");th{text-align:center;}thead{text-align:center;}</style>\n</head>\n\n<body>\n<p>Termine für <b>";
            text1 = "</b></p>\n";
            text2 = "<div class=\"container\">\n<div class=\"span12\">\n<table class=\"table table-bordered\" border=\"2px\" cellpadding=10>\n<thead>\n<tr>\n<th width=\"100px\">Tage</th>\n<th width=\"100px\">Datum</th>\n<th width=\"100px\">Zeit</th>\n<th width=\"200px\">Ort</th>\n<th width=\"150px\">Zusatz</th>\n</tr>\n</thead>\n<tbody>";
       
            ofstream Datenschreiber;
            Datenschreiber.open(pfad0.c_str(),fstream::in | fstream::out | fstream::app);
            Datenschreiber << text0;
            Datenschreiber << benutzer;
            Datenschreiber << text1;
            Datenschreiber << text2;
            Datenschreiber.close();
            
           
            string htaccess_file;
            htaccess_file = std::string(globalpfad0) + benutzer + "/.htaccess";
            string htpasswd_file;
            htpasswd_file = std::string(globalpfad0) + benutzer + "/.htpasswd";
            
            string text3 = "AuthType Basic";
            string text4 = "AuthName \"Zugriff verweigert - Bitte User und Passwort eingeben\"";
            string text5 = "AuthUserFile " + htpasswd_file;
            string text6 = "Require user " + benutzer;
            
            // .htaccess Datei erzeugen.
            ofstream htaccesswriter;
            htaccesswriter.open(htaccess_file.c_str(),fstream::in | fstream::out | fstream::app);
            htaccesswriter << text3;
            htaccesswriter << std::endl;
            htaccesswriter << text4;
            htaccesswriter << std::endl;
            htaccesswriter << text5;
            htaccesswriter << std::endl;
            htaccesswriter << text6;
            htaccesswriter.close();
            // .htpasswd Datei erzeugen.
            system(("htpasswd -c "+htpasswd_file+ " " + benutzer).c_str());
        
            cout << "\nBenutzer " << benutzer << " wurde erfolgreich hinzugefügt!." << endl;
    }
    
    // Void RmUser in Klasse InterfaceActions
    void RmUser() {
        cout << "\033[2J\033[1;1H";
        cout << "Username: " << endl;
        cin >> benutzer;
        // String verketten
        pfad0 = std::string(globalpfad0) + benutzer;
        // Pfad verketten
        pfad0 = std::string(pfad0) + "/termine.html";
        remove(pfad0.c_str());
        pfad0 = std::string(globalpfad0) + benutzer;
        // Pfad verketten
        pfad0 = std::string(pfad0) + "/.htaccess";
        system(("sudo chmod 777 " + pfad0).c_str());
        remove(pfad0.c_str());
        // Pfad verketten
        pfad0 = std::string(globalpfad0) + benutzer;
        pfad0 = std::string(pfad0) + "/.htpasswd";
        system(("sudo chmod 777 " + pfad0).c_str());
        remove(pfad0.c_str());
        // String verketten
        pfad0 = std::string(globalpfad0) + benutzer;
        cout << pfad0;
        if( rmdir(pfad0.c_str()) != 0 ) {
            perror( "Ein Fehler geschah beim löschen des Benutzers" );
            cin.get();
        }
        else {
            cout << "\nBenutzer " << benutzer << "wurde erfolgreich gelöscht!." << endl;
            cin.get();
        }
    }
    
    // Void AddTermin in Klasse InterfaceActions
    void AddTermin() {
        cout << "\033[2J\033[1;1H";
        cout << "Für wen soll der Termin eingetragen werden?" << endl;
        cout << "Benutzername: " << endl;
        cin >> benutzer;
            
        Tage Termine;   // Erzeuge Objekt Termine aus Klasse Tage
        int Tag;
        cout << "1. Samstag" << endl;
        cout << "2. Montag" << endl;
        cout << "3. Dienstag" << endl;
        cout << "4. Mittwoch" << endl;
        cout << "5. Donnerstag" << endl;
        cout << "6. Freitag" << endl;
        cout << "Auswahl: " << endl;
        cin >> Tag;
        // Switch Case Verzweigung für Tagesauswahl
        switch(Tag) {
            case 1: Termine.Samstag();      break;
            case 2: Termine.Montag();       break;
            case 3: Termine.Dienstag();     break;
            case 4: Termine.Mittwoch();     break;
            case 5: Termine.Donnerstag();   break;
            case 6: Termine.Freitag();      break;
        }
    }
    
    
    // Void RmTermin in Klasse InterfaceActions
    void RmTermin() {  
        cout << "\033[2J\033[1;1H";
        cout << "Username: " << endl;
        cin >> benutzer;
        // String verketten
        pfad0 = std::string(globalpfad0) + benutzer;
        // Pfad verketten
        pfad0 = std::string(pfad0) + "/termine.html";

        system(("sudo chmod 777 " + pfad0).c_str());                   

         char word[20];  // Nutzereingabe in Array speichern
         int array_size = 2048; // Größe des Arrays festlegen
         char * array = new char[array_size]; // Arraygröße von 2kb einstellen
         int position = 0; // benutzt um Zeichen im Array zu füllen 

         getchar();
         cout << "Welchen Eintrag Wollen Sie löschen? : ";
         cin.getline(word,19); // Worteingabe für die Suche
         int word_size = 0;
         // Länge der Nutzereingabe berechnen
         for(int i = 0; word[i] != '\0'; i++) {
            word_size++;
         }

         ifstream fin(pfad0.c_str()); // Input Stream für die Datei öffnen
         // Überprüfen ob die Datei geöffnet werden konnte
         if(fin.is_open()) {
         // Datei erfolgreich geöffnet
         // Schleife bis zum EOF
            while(!fin.eof() && position < array_size) {
                fin.get(array[position]); // lese ein Zeichen der Datei in ein Array
                position++;
            }
            array[position-1] = '\n'; // setze Zeichen Array um Zeichen zu löschen

            // Schleife sucht nach dem jeweiligen Wort im Array
            string arstr(array);
            size_t wpos = arstr.find(word);
            if (wpos != string::npos) {
                size_t secNL = arstr.find('\n', wpos);
                size_t firNL = arstr.rfind('\n', wpos);
                if (secNL != string::npos && firNL != string::npos)
                    arstr.erase(firNL, secNL - firNL);
            }

            fin.close();
            ofstream fout(pfad0.c_str());
            fout << arstr.c_str();
            cout<< "Eintrag wurde entfernt." << endl;
         }

         else {
            cout << "Datei konnte nicht geöffnet werden." << endl;
         }
                     
    }   
    
        
    // Void ServerStatus in Klasse InterfaceActions
    void ServerStatus() {
        cout << "\033[2J\033[1;1H";
        // Apache Status
        system("sudo systemctl status httpd");
    }

    // Void RestartServer in Klasse InterfaceActions
    void RestartServer() {
        cout << "\033[2J\033[1;1H";
        // Apache Server neustarten
        system("sudo systemctl restart httpd");
    }

    // Void DisplayIP in Klasse InterfaceActions
    void DisplayIP() { 
        cout << "\033[2J\033[1;1H";
        // externe IP-Adresse fetchen
        system("curl icanhazip.com");
    }

    // Void DUC_Status in Klasse InterfaceActions
    void DUC_Status() {
        cout << "\033[2J\033[1;1H";
        cout << "Status des NO-IP DUC: " << endl;
        system("systemctl status noip2");
    }
    
    // Void DUC_Restart in Klasse InterfaceActions
    void DUC_Restart() {
        cout << "\033[2J\033[1;1H";
        system("sudo systemctl restart noip2");
        cout << "Der NO-IP DUC wurde erfolgreich neugestartet." << endl;
    }

    // Void DUC_Update_Host in Klasse InterfaceActions
    void DUC_Update_Host() {
        
    }

    // Void TerminateProgram in Klasse InterfaceActions
    void TerminateProgram() {
        cout << "\033[2J\033[1;1H";
        cout << "\nAuf Wiedersehen!\n" << endl;
        exit(0);
    }
    
};

// Void MasterMenu dient als Hauptmenü
void MasterMenu() {
    
    cout << "\033[2J\033[1;1H";
    int auswahl;
    
    // Auswahl Mastermenü
    cout << "---------------------------" << endl;
    cout << "|" << "\t>> Menü <<" << "\t  |" << endl;
    cout << "---------------------------" << endl;
    cout << "| 1. Benutzer anlegen" << "\t  |" << endl;
    cout << "| 2. Benutzer löschen" << "\t  |" << endl;
    cout << "| 3. Termine eintragen" << "\t  |" << endl;
    cout << "| 4. Server Status" << "\t  |" << endl;
    cout << "| 5. Server neustart" << "\t  |" << endl;
    cout << "| 6. IP-Adresse auslesen" << "  |" << endl;
    cout << "| 7. NOIP DUC Status" << "\t  |" << endl;
    cout << "| 8. NOIP DUC Neustarten" << "  |" << endl;
    cout << "| 9. NOIP DUC Update host" << " |" << endl;
    cout << "| 10.Termmin löschen" << " |" << endl;
    cout << "| 0. Beenden" << "\t\t  |" << endl;
    cout << "---------------------------" << endl;
    cout << "| Auswahl: "; cin >> auswahl; cout << "|" << endl;
    cout << "---------------------------" << endl;
    
    // Erzeuge Objekt MenuActions aus Klasse InterfaceActions 
    InterfaceActions MenuActions;
    
    switch(auswahl) {
        case 1: MenuActions.AddUser();          break;  // rufe Funktion auf um Benutzer hinzuzufügen
        case 2: MenuActions.RmUser();           break;  // rufe Funktion auf um Benutzer zu löschen
        case 3: MenuActions.AddTermin();        break;  // rufe Funktion auf um Termine hinzuzufügen
        case 4: MenuActions.ServerStatus();     break;  // rufe Funktion auf um den Status des Server anzuzeigen 
        case 5: MenuActions.RestartServer();    break;  // rufe Funktion auf um den Server neuzustarten
        case 6: MenuActions.DisplayIP();        break;  // rufe Funktion auf um die IP Adresse des Servers auszulesen
        case 7: MenuActions.DUC_Status();       break;  // rufe Funktion auf um den Status des NO-IP DUCs anzuzeigen
        case 8: MenuActions.DUC_Restart();      break;  // rufe Funktion auf um den NO-IP DUC neuzustarten
        case 9: MenuActions.DUC_Update_Host();  break;  // rufe Funktion auf um den Host des NO-IP DUCs zu aktualisieren
        case 10: MenuActions.RmTermin();        break;  // rufe Funktion auf um einen Termin zu löschen
        case 0: MenuActions.TerminateProgram(); break;  // rufe Funktion auf um das Programm SRATSM1 zu beenden
    }
       
}

// Hauptmethode
int main(int argc, char** argv) {
    
    cout << "\033[2J\033[1;1H";
    cout << "Welcome 2 the Administrative CLI Interface for the SRTSM1 Server Systems!\n\nCopyright 2016 Pascal Peinecke <passi0698@tuta.io> & Darius Musiolik <dmusiolik@pipboy>\n" << endl;
    MasterMenu();
    
    // Ende Programm SRATSM1
    return 0;
}