#include<Wire.h>


const int TRIG_PIN = 17;
const int ECHO_PIN =16;

void setup(){
  Serial.begin(115200);
  pinMode(TRIG_PIN , OUTPUT);
  pinMode(ECHO_PIN , INPUT);
}

void loop(){
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN,HIGH);

  long duration = pulseIn(ECHO_PIN,HIGH);

  float distanceCm = duration * 0.034 / 2;
  float distanceMt = distanceCm / 100;
  float distanceInch = distanceCm /2.54;

  Serial.println("Distance in Cm: " + String(distanceCm,2) + "cm");
  Serial.println("---------------------------------------------------------");

  delay(100);

}