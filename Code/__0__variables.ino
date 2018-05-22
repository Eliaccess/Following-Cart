#include "Arduino.h"
#include "MotorDriver.h"
//ports :

int buzzer = 4;

int bouttonStart = 6;

int sig1 = 23;
long cm1;

int sig2 = 25;
long cm2;

int sig3 = 27;
long cm3;

int sig4 = 29;
long cm4;

int sig5 = 31;
long cm5;

int sig6 = 33;
long cm6;
 
int sig7 = 35;
long cm7;

int sig8 = 37;
long cm8;

int sig9 = 39;
long cm9;

int sig10 = 41;
long cm10;
 
int sig11 = 43;
long cm11;

int ledRouge = 44;


// Lecture ultrason | Ultrasonic information reading :

long duration;

// Variables de gestion | Management variables :

long placementUtilisateur;

long distancesLaterales[6];

int tailleTableauLaterales = 6;

int lecture_Bouton = 0; // 0: non enclenché, 1: enclenché | 0: non switched, 1: switched

// Variables de sécurité | Security variable :

int autorisation; // etat 1 : fonctionnement autorisé | etat 0 : fonctionnement non autorisé

// Variable de motorisation | Motorization variables :

MotorDriver motor;

