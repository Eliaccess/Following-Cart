#include "header.h"
#include "Arduino.h"
#include "MotorDriver.h"

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


int LirePositionUtilisateur1(int sig1, int sig2, int sig3, int sig4, int sig5, int cm1, int cm2, int cm3, int cm4, int cm5, long duration) // On lit les valeurs des 5 capteurs à ultrasons du module suiveur et on les met dans un tableau
{ 
  int placementutilisateur;
  
  pinMode(sig1, OUTPUT);
  digitalWrite(sig1, LOW);
  delayMicroseconds(2);
  digitalWrite(sig1, HIGH);
  delayMicroseconds(5);
  digitalWrite(sig1, LOW);
  pinMode(sig1, INPUT);
  duration = pulseIn(sig1, HIGH);
  cm1 = microsecondsToCentimeters(duration);
  Serial.print("cm1 : ");
  Serial.print(cm1);
  Serial.println();
  Serial.print("cm1 : ");
  Serial.print(cm1);
  Serial.println();
  
  
  
  return cm1;
  
}

int LirePositionUtilisateur2(int sig1, int sig2, int sig3, int sig4, int sig5, int cm1, int cm2, int cm3, int cm4, int cm5, long duration)
{
  pinMode(sig2, OUTPUT);
  digitalWrite(sig2, LOW);
  delayMicroseconds(2);
  digitalWrite(sig2, HIGH);
  delayMicroseconds(5);
  digitalWrite(sig2, LOW);
  pinMode(sig2, INPUT);
  duration = pulseIn(sig2, HIGH);
  cm2 = microsecondsToCentimeters(duration);
  Serial.print("cm2 : ");
  Serial.print(cm2);
  Serial.println();
  
  return cm2;
}

int LirePositionUtilisateur3(int sig1, int sig2, int sig3, int sig4, int sig5, int cm1, int cm2, int cm3, int cm4, int cm5, long duration)
{
   pinMode(sig3, OUTPUT);
  digitalWrite(sig3, LOW);
  delayMicroseconds(2);
  digitalWrite(sig3, HIGH);
  delayMicroseconds(5);
  digitalWrite(sig3, LOW);
  pinMode(sig3, INPUT);
  duration = pulseIn(sig3, HIGH);
  cm3 = microsecondsToCentimeters(duration);
  Serial.print(cm3);
  Serial.print("cm3");
  Serial.println();
  
  return cm3;
}

int LirePositionUtilisateur4(int sig1, int sig2, int sig3, int sig4, int sig5, int cm1, int cm2, int cm3, int cm4, int cm5, long duration)
{
   pinMode(sig4, OUTPUT);
  digitalWrite(sig4, LOW);
  delayMicroseconds(2);
  digitalWrite(sig4, HIGH);
  delayMicroseconds(5);
  digitalWrite(sig4, LOW);
  pinMode(sig4, INPUT);
  duration = pulseIn(sig4, HIGH);
  cm4 = microsecondsToCentimeters(duration);
  Serial.print("cm4 : ");
  Serial.print(cm4);
  Serial.println();
  
  return cm4;
}

int LirePositionUtilisateur5(int sig1, int sig2, int sig3, int sig4, int sig5, int cm1, int cm2, int cm3, int cm4, int cm5, long duration)
{
  pinMode(sig5, OUTPUT);
  digitalWrite(sig5, LOW);
  delayMicroseconds(2);
  digitalWrite(sig5, HIGH);
  delayMicroseconds(5);
  digitalWrite(sig5, LOW);
  pinMode(sig5, INPUT);
  duration = pulseIn(sig5, HIGH);
  cm5 = microsecondsToCentimeters(duration);
  Serial.print("cm5 : ");
  Serial.print(cm5);
  Serial.println();
  
  return cm5;
}



//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

long microsecondsToCentimeters(long microseconds)
{
  // Comme expliqué auparavant nous divisons la durée par la vitesse et par 2 pour avoir la distance d’un aller simple.
  return microseconds / 29 / 2;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

int OrientationUtilisateur(int cm1, int cm2, int cm3, int cm4, int cm5) // On cherche le capteur captant la distance la plus petite enregistrées dans le tableau
{
   int placementuser;
   
    Serial.print("CM1 apres traitement 2 : ");
    Serial.print(cm1);
    Serial.println();
    
    long rangement[5];
    int taillerangement = 5;
    rangement[1] = cm1;
    rangement[2] = cm2;
    rangement[3] = cm3;
    rangement[4] = cm4;
    rangement[5] = cm5;
   
   placementuser = rangement[1];
   if(placementuser > rangement[2])
   {
     placementuser = rangement[2];
   }
   
   if(placementuser > rangement[3])
   {
     placementuser = rangement[3];
   }
   
   if(placementuser > rangement[4])
   {
     placementuser = rangement[4];
   }
   
   if(placementuser > rangement[5])
   {
     placementuser = rangement[5];
   }
   
    Serial.print("placement apres traitement 2 : ");
    Serial.print(placementuser);
    Serial.println();
   
   
   return placementuser;
  
}


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


int LireDistancesLaterales6(int sig6, int sig7, int sig8, int sig9, int sig10, int sig11, int cm6, int cm7, int cm8, int cm9, int cm10, int cm11, long duration) // On lit les distances latérales, et on enregistre dans un tableau
{
  pinMode(sig6, OUTPUT);
  digitalWrite(sig6, LOW);
  delayMicroseconds(2);
  digitalWrite(sig6, HIGH);
  delayMicroseconds(5);
  digitalWrite(sig6, LOW);
  pinMode(sig6, INPUT);
  duration = pulseIn(sig6, HIGH);
  cm6 = microsecondsToCentimeters(duration);
  Serial.print("cm6 : ");
  Serial.print(cm6);
  Serial.println();
  
  return cm6;
}

int LireDistancesLaterales7(int sig6, int sig7, int sig8, int sig9, int sig10, int sig11, int cm6, int cm7, int cm8, int cm9, int cm10, int cm11, long duration)
{
  pinMode(sig7, OUTPUT);
  digitalWrite(sig7, LOW);
  delayMicroseconds(2);
  digitalWrite(sig7, HIGH);
  delayMicroseconds(5);
  digitalWrite(sig7, LOW);
  pinMode(sig7, INPUT);
  duration = pulseIn(sig7, HIGH);
  cm7 = microsecondsToCentimeters(duration);
  Serial.print("cm7 : ");
  Serial.print(cm7);
  Serial.println();
  return cm7;
}

int LireDistancesLaterales8(int sig6, int sig7, int sig8, int sig9, int sig10, int sig11, int cm6, int cm7, int cm8, int cm9, int cm10, int cm11, long duration)
{
  pinMode(sig8, OUTPUT);
  digitalWrite(sig8, LOW);
  delayMicroseconds(2);
  digitalWrite(sig8, HIGH);
  delayMicroseconds(5);
  digitalWrite(sig8, LOW);
  pinMode(sig8, INPUT);
  duration = pulseIn(sig8, HIGH);
  cm8 = microsecondsToCentimeters(duration);
  Serial.print("cm8 : ");
  Serial.print(cm8);
  Serial.println();
  return cm8;
}

int LireDistancesLaterales9(int sig6, int sig7, int sig8, int sig9, int sig10, int sig11, int cm6, int cm7, int cm8, int cm9, int cm10, int cm11, long duration)
{
  pinMode(sig9, OUTPUT);
  digitalWrite(sig9, LOW);
  delayMicroseconds(2);
  digitalWrite(sig9, HIGH);
  delayMicroseconds(5);
  digitalWrite(sig9, LOW);
  pinMode(sig9, INPUT);
  duration = pulseIn(sig9, HIGH);
  cm9 = microsecondsToCentimeters(duration);
  Serial.print("cm9 : ");
  Serial.print(cm9);
  Serial.println();
  return cm9;
}

int LireDistancesLaterales10(int sig6, int sig7, int sig8, int sig9, int sig10, int sig11, int cm6, int cm7, int cm8, int cm9, int cm10, int cm11, long duration)
{
  pinMode(sig10, OUTPUT);
  digitalWrite(sig10, LOW);
  delayMicroseconds(2);
  digitalWrite(sig10, HIGH);
  delayMicroseconds(5);
  digitalWrite(sig10, LOW);
  pinMode(sig10, INPUT);
  duration = pulseIn(sig10, HIGH);
  cm10 = microsecondsToCentimeters(duration);
    Serial.print("cm10 : ");
  Serial.print(cm10);
  Serial.println();
  return cm10;
}

int LireDistancesLaterales11(int sig6, int sig7, int sig8, int sig9, int sig10, int sig11, int cm6, int cm7, int cm8, int cm9, int cm10, int cm11, long duration)
{
  pinMode(sig11, OUTPUT);
  digitalWrite(sig11, LOW);
  delayMicroseconds(2);
  digitalWrite(sig11, HIGH);
  delayMicroseconds(5);
  digitalWrite(sig11, LOW);
  pinMode(sig11, INPUT);
  duration = pulseIn(sig11, HIGH);
  cm11 = microsecondsToCentimeters(duration);
  Serial.print("cm11 : ");
  Serial.print(cm11);
  Serial.println();
  return cm11;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


int securite(int placementUtilisateur, int cm6, int cm7, int cm8, int cm9, int cm10, int cm11) //Gestion de la sécurité en modifiant la variable de sécurité
{
  // On commence par les distances latérales
  int safe = 1, autorisation = 1;    //safe = 1 sécurisé et safe = 0 non sécurisé
 
   if (cm6 < 10)
   {
          safe = 0;
   }
   else if (cm7 < 10)
   {
          safe = 0;
   }
   else if (cm8 < 10)
   {
          safe = 0;
   }
   else if (cm9 < 10)
   {
          safe = 0;
   }
   else if (cm10 < 10)
   {
          safe = 0;
   }
   else if (cm11 < 10)
   {
          safe = 0;
   }
  
  // On s'occupe maintenant de la distance Module Suiveur - Utilisateur
  
    Serial.print("Placement Utilisateur : ");
    Serial.print(placementUtilisateur);
    Serial.println();
  
   if (placementUtilisateur < 20)
   {
         safe = 0;
   }  
   
   else if (placementUtilisateur > 50)
   {
         safe = 0;
   }  
   
  
   if(safe == 0)
   {
        autorisation = 0;
   }
   
   else if(safe == 1)
   {
        autorisation = 1;
   }
   
   return autorisation;
}


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


void avertir(int buzzer, int ledRouge, int autorisation) // Avertir en cas de non sécurité
{
  if(autorisation == 0)
  {
    digitalWrite(buzzer, HIGH); //On allume le buzzer
    digitalWrite(ledRouge, HIGH); // On allume la Led                                    
  }
  
  else if (autorisation == 1)
  {
    digitalWrite(buzzer, LOW); //On éteint le buzzer
    digitalWrite(ledRouge, LOW); // On éteint la Led
  }
}


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


int allumage(int bouttonStart, int lecture_Bouton) //Gere l'allumage et l'extinction du mode de suivage
{
  lecture_Bouton = digitalRead(bouttonStart);
  return lecture_Bouton;
}


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


/*void deplacement(int autorisation, int placementUtilisateur,int cm1, int cm2, int cm3, int cm4, int cm5) // Gere le déplacement en fonction de la position de l'utilisateur guideur
{
  if(autorisation = 1)
  {
    
   if(placementUtilisateur = cm1) // se réferer à la page d'explication pour l'orientation des capteurs
   {
     motor.speed(0, 60);
     motor.speed(1, 100);
   }
   else if(placementUtilisateur = cm2)
   {
     motor.speed(0, 80);
     motor.speed(1, 100);
   }
   else if(placementUtilisateur = cm3) 
   {
     motor.speed(0, 100);
     motor.speed(1, 100);
   }
   else if(placementUtilisateur = cm4)
   {
     motor.speed(0, 100);
     motor.speed(1, 80);
   }
   else if(placementUtilisateur = cm5)
   {
     motor.speed(0, 100);
     motor.speed(1, 60);
   }

  }
  else
  {
    motor.stop(0);
    motor.stop(1);
  }
}
*/

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


/* pour le ledbar :
#include <Grove_LED_Bar.h>

LED_Bar bar(ledBar1, ledBar2);

Allumer un certain niveau :

bar.setLevel(i) // avec i le niveau sur 10 des leds allumées

*/


/* pour le buzzer :

en setup :

pinMode(buzzer, OUTPUT);

en loop :

digitalWrite(buzzer, HIGH);
delay(analogRead(0));
digitalWrite(buzzer, LOW);
delay(analogRead(0));

*/


/* pour le boutton :

dans le setup :

pinMode(bouttonStart, INPUT);

dans le loop :

lecture_Bouton = digitalRead(bouttonStart);

*/


/* pour la LED rouge :

dans setup :

pinMode(ledRouge, OUTPUT);

dans loop :

digitalWrite(ledRouge, HIGH); // etat allumé avec HIGH et éteint avec LOW

*/


/* Infos gestion moteurs :

http://wiki.seeed.cc/Motor_Shield_V2.0/
*/
