#include "header.h"
#include "Arduino.h"
#include "MotorDriver.h"

void setup()
{
  pinMode(buzzer, OUTPUT);
  
  pinMode(ledRouge, OUTPUT);
  
  pinMode(bouttonStart, INPUT);
  
  motor.begin();
  
  Serial.begin(9600);
}

