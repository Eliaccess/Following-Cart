#include "header.h"
#include "Arduino.h"
#include "MotorDriver.h"

void loop()
{   
  lecture_Bouton = allumage(bouttonStart, lecture_Bouton);
  
  Serial.print(lecture_Bouton);
  
  if(lecture_Bouton == 1)
  {
    delay(1000);
    
    Serial.print(lecture_Bouton);
    
    lecture_Bouton = allumage(bouttonStart, lecture_Bouton);
    
    Serial.print("r");
    
    while(lecture_Bouton == LOW)
    {
      cm1 = LirePositionUtilisateur1(sig1, sig2, sig3, sig4, sig5, cm1, cm2, cm3, cm4, cm5, duration);
      cm2 = LirePositionUtilisateur2(sig1, sig2, sig3, sig4, sig5, cm1, cm2, cm3, cm4, cm5, duration);
      cm3 = LirePositionUtilisateur3(sig1, sig2, sig3, sig4, sig5, cm1, cm2, cm3, cm4, cm5, duration);
      cm4 = LirePositionUtilisateur4(sig1, sig2, sig3, sig4, sig5, cm1, cm2, cm3, cm4, cm5, duration);
      cm5 = LirePositionUtilisateur5(sig1, sig2, sig3, sig4, sig5, cm1, cm2, cm3, cm4, cm5, duration);
    
      placementUtilisateur = OrientationUtilisateur(cm1, cm2, cm3, cm4, cm5);
      Serial.print("a");
        
      cm6 = LireDistancesLaterales6(sig6, sig7, sig8, sig9, sig10, sig11, cm6, cm7, cm8, cm9, cm10, cm11, duration);
      cm7 = LireDistancesLaterales7(sig6, sig7, sig8, sig9, sig10, sig11, cm6, cm7, cm8, cm9, cm10, cm11, duration);
      cm8 = LireDistancesLaterales8(sig6, sig7, sig8, sig9, sig10, sig11, cm6, cm7, cm8, cm9, cm10, cm11, duration);
      cm9 = LireDistancesLaterales9(sig6, sig7, sig8, sig9, sig10, sig11, cm6, cm7, cm8, cm9, cm10, cm11, duration);
      cm10 = LireDistancesLaterales10(sig6, sig7, sig8, sig9, sig10, sig11, cm6, cm7, cm8, cm9, cm10, cm11, duration);
      cm11 = LireDistancesLaterales11(sig6, sig7, sig8, sig9, sig10, sig11, cm6, cm7, cm8, cm9, cm10, cm11, duration);
      
      autorisation = securite(placementUtilisateur, cm6, cm7, cm8, cm9, cm10, cm11);
    
      avertir(buzzer, ledRouge, autorisation);
    
      lecture_Bouton = allumage(bouttonStart, lecture_Bouton);
    } 
    
  }
  
  digitalWrite(buzzer, LOW); //On éteint le buzzer
  digitalWrite(ledRouge, LOW); // On éteint la Led
  
  delay (1000);
  
}
