/*

  Original Author: Eliaccess
  
  The MIT License (MIT)

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
  
-----------------------------------------------------------------------
ENGLISH DESCRIPTION :

HOW THE CODE IS ORGANISED

Variables file :
- First declares the used pins
- Then the other global variables (used for calculation and security)

Setup file :
- setup() initialization function

SousProgrammes.cpp :
- Defines all the function we uses in the main function [loop()]

Programme_Loop file :
- loop(), main loop function
- Uses other functions declared in header.h file and defined in SousProgrammes.cpp

NOTES ABOUT MOTORS / SENSORS :

ULTRASONIC SENSORS : There are 11 ultrasonic sensors, 5 for detecting the user, and 6 for security (detecting for lateral hits)
- CM1 : distance picked up by the rightmost ultrasound sensor
- CM2 : distance picked up by the right-central ultrasound sensor
- CM3 : distance picked up by the central ultrasound sensor
- CM4 : distance picked up by the left-central ultrasound sensor
- CM5 : distance picked up by the leftmost ultrasound sensor

- sig pins : used to send / receive ultrasonic wave

MOTORS (two, which allows to go forward, backward, and to turn):
- Moteur 0 : right motor, OUT 1 & 2
- Moteur 1 : left motor, OUT 3 & 4

-----------------------------------------------------------------------

FRENCH DESCRIPTION : 

ORGANISATION DU CODE

Fichier variables :
- Commence par les ports assignés aux capteurs
- Contient toutes les variables globales

Fichier Setup :
- Fonction d'initialisation void setup()

Fichier Programme_Loop :
- Boucle principale void loop()
- Intègre les sous programmes en faisant appel au header.h*

Fichier variables :
- Contient la définition des sous programmes codés dans SousProgrammes

Fichier SousProgrammes.cpp :
- Contient tous les sous programmes relatifs à la gestion des capteurs, de la sécurité et de la gestion des moteurs


NOTES SUR LES CAPTEURS / MOTEURS :

ULTRASON (11 au total, 5 pour détécter et localiser l'utilisateur, et 6 pour détecter les obstacles et collisions latérales) :

- CM1 : distance captée par le capteur à ultrason le plus à droite
- CM2 : distance captée par le capteur à ultrason central-droit
- CM3 : distance captée par le capteur à ultrason central
- CM4 : distance captée par le capteur à ultrason central-gauche
- CM5 : distance captée par le capteur à ultrason le plus à gauche

- Ports sig : ports de réception du signal ultrasonique

MOTEURS :

- Moteur 0 : moteur droit, OUT 1 & 2
- Moteur 1 : moteur gauche, OUT 3 & 4

*/
