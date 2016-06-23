/*
 * SRATSM1.c
 * 
 * Copyright 2016 Darius Musiolik <dmusiolik@pipboy>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Grund Variablen
char benutzer[99];
char pfad0[128] = "/var/www/nginx/";
char pfad1[128] = "/termine.html";
char *text0; 
char *text1;
char *text2;
char *samstag0;
char *samstag1;
char *samstag2;
char *samstag3;
char *samstag4;
char *montag;
char *textN;

//Samstags Variablen
char sadatum[99];
char sazeit[99];
char saort[999];
char sazusatz[99];

int main(int argc, char **argv)
{
	printf("Welcome 2 the Administrative CLI Interface for the SRTSM1 Server Systems!\n\nCopyright 2016 Darius Musiolik <dmusiolik@pipboy>\n\n");
	printf("Bitte Tragen Sie den Benutzernamen ein: ");
        fgets(benutzer,sizeof benutzer,stdin); //Char Array einlesen
        strtok(benutzer, "\n"); //Zeilenumbruch töten
        printf("->%s", &benutzer);
        printf("<- Eingelesen.");
        
        //Samstag
        printf("\n\nBitte geben Sie das Datum für Samstag an: ");
        fgets(sadatum,100,stdin); 
        printf("->%s", &sadatum);
        printf("<- Eingelesen.");
        
        printf("\n\nBitte geben Sie die Zeit für Samstag an: ");
        fgets(sazeit,100,stdin); 
        printf("->%s", &sazeit);
        printf("<- Eingelesen.");
        
        printf("\n\nBitte geben Sie den ort für Samstag an: ");
        fgets(saort,100,stdin); 
        printf("->%s", &saort);
        printf("<- Eingelesen.");
        
        printf("\n\nBitte geben Sie den Zusatz für Samstag an: ");
        fgets(sazusatz,100,stdin); 
        printf("->%s", &sazusatz);
        printf("<- Eingelesen.");

        //variablen verketten.....
        strcat(pfad0, benutzer);
        strcat(pfad0, pfad1);
        
        printf("\nPfad: %s", pfad0);
        
	FILE *f = fopen("%s", "w", pfad0);

	/* print some text */
	text0 = "<!DOCTYPE html>\n<html>\n\n<head>\n<title>Terminplan</title>\n<meta charset=\"UTF-8\">\n</head>\n\n<body>\n<p>Termine für<b>";
        text1 = "</b></p>";
        text2 = "<table border=\"2px\">\n<tr>\n<th width=\"100px\">Tage</th> <th width=\"100px\">Datum</th> <th width=\"100px\">Zeit</th> <th width=\"800px\" >Ort</th> <th width=\"150px\">Zusatz</th>\n</tr>";
	
        //Samstag Block
        samstag0 = "<tr>\n<td width=\"100px\">Samstag</td> <td width=\"100px\">";
        samstag1 = "</td> <td width=\"100px\">";
        samstag2 = "</td> <td width=\"800px\" >";
        samstag3 = "</td> <td width=\"150px\">";
        samstag4 = "</td>\n</tr>";
        
        montag = "<tr>\n<td width=\"100px\">Montag</td> <td width=\"100px\"> VAR!</td> <td width=\"100px\"> VAR!</td> <td width=\"800px\" > VAR!</td> <td width=\"150px\"> VAR!</td>\n</tr>";
        
        textN = "\n</table>\n</body>\n\n</html>";
	fprintf(f, "%s %s %s %s %s %s %s %s %s %s %s %s %s %s", text0, &benutzer, text1, text2, samstag0, sadatum, samstag1, sazeit, samstag2, saort, samstag3, sazusatz, samstag4, textN);

	fclose(f);


	return 0;
}