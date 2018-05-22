#include "Arduino.h"
#include "MotorDriver.h"

//En rapport avec l'utilisateur :
int LirePositionUtilisateur1(int sig1, int sig2, int sig3, int sig4, int sig5, int cm1, int cm2, int cm3, int cm4, int cm5, long duration);
int LirePositionUtilisateur2(int sig1, int sig2, int sig3, int sig4, int sig5, int cm1, int cm2, int cm3, int cm4, int cm5, long duration);
int LirePositionUtilisateur3(int sig1, int sig2, int sig3, int sig4, int sig5, int cm1, int cm2, int cm3, int cm4, int cm5, long duration);
int LirePositionUtilisateur4(int sig1, int sig2, int sig3, int sig4, int sig5, int cm1, int cm2, int cm3, int cm4, int cm5, long duration);
int LirePositionUtilisateur5(int sig1, int sig2, int sig3, int sig4, int sig5, int cm1, int cm2, int cm3, int cm4, int cm5, long duration);

long microsecondsToCentimeters(long microseconds);

int OrientationUtilisateur(int cm1, int cm2, int cm3, int cm4, int cm5);


//En rapport avec les distances latérales :
void ListerDistances(int cm1, int cm2, int cm3, int cm4, int cm5, long distancesLaterales[6]);

int LireDistancesLaterales6(int sig6, int sig7, int sig8, int sig9, int sig10, int sig11, int cm6, int cm7, int cm8, int cm9, int cm10, int cm11, long duration);
int LireDistancesLaterales7(int sig6, int sig7, int sig8, int sig9, int sig10, int sig11, int cm6, int cm7, int cm8, int cm9, int cm10, int cm11, long duration);
int LireDistancesLaterales8(int sig6, int sig7, int sig8, int sig9, int sig10, int sig11, int cm6, int cm7, int cm8, int cm9, int cm10, int cm11, long duration);
int LireDistancesLaterales9(int sig6, int sig7, int sig8, int sig9, int sig10, int sig11, int cm6, int cm7, int cm8, int cm9, int cm10, int cm11, long duration);
int LireDistancesLaterales10(int sig6, int sig7, int sig8, int sig9, int sig10, int sig11, int cm6, int cm7, int cm8, int cm9, int cm10, int cm11, long duration);
int LireDistancesLaterales11(int sig6, int sig7, int sig8, int sig9, int sig10, int sig11, int cm6, int cm7, int cm8, int cm9, int cm10, int cm11, long duration);

//En rapport avec la sécurité
int securite(int placementUtilisateur, int cm6, int cm7, int cm8, int cm9, int cm10, int cm11);

void avertir(int buzzer, int ledRouge, int autorisation);

//En rapport avec l'allumage :
int allumage(int bouttonStart, int lecture_Bouton);

// En rapport avec la gestion des moteurs
void deplacement(int autorisation, int placementUtilisateur,int cm1, int cm2, int cm3, int cm4, int cm5);
