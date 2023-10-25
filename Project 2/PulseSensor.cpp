/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/shameemahfuseini-codjoe/Documents/PulseSensor/src/PulseSensor.ino"
void setup();
void loop();
#line 1 "/Users/shameemahfuseini-codjoe/Documents/PulseSensor/src/PulseSensor.ino"
const pin_t LED7 = D7;
const pin_t PulseSensorPurplePin = D11;

unsigned long startTime = 0;
float sensorValue = 0;
boolean counted = false;
int count = 9;
int heartRate = 0;
int threshold = 2048;

void setup(){
    
    pinMode(LED7,OUTPUT);
    Serial.begin(9600);
    
    }
    
void loop() {

  startTime = millis();

  while (millis()<startTime+10000)
  {
    sensorValue = analogRead(PulseSensorPurplePin);

    if (sensorValue > threshold && counted == false)
    {
      count++;

      Serial.print ("count = ");
      Serial.println (count);

      digitalWrite (LED7,HIGH);   
      delay (50);
      digitalWrite (LED7, LOW);

      counted = true;
    } else if (sensorValue < threshold)
    {
      counted = false;
      digitalWrite (LED7, LOW);
    }
    
    
  }
  
  heartRate = count*6;                               // Multiply the count by 6 to get beats per minute

  Serial.println ();  
  Serial.print ("BPM = ");
  Serial.println (heartRate);                        // Display BPM in the Serial Monitor
  Serial.println ();

  count = 0;
  
}