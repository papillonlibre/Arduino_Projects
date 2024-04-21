/*#include <NewPing.h>

const int trigPin = 5;
const int echoPin = 4;
const int maxDisCM = 50;

NewPing sonar (trigPin, echoPin, maxDisCM);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println ("Distance in cm: " + sonar.ping_cm());
  Serial.println ("Distance in inches: " + sonar.ping_in());
}
*/

int duration;
int distance;
const int trigPin = 5;
const int echoPin = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode (trigPin, OUTPUT);
  pinMode (echoPin, INPUT);
  Serial.begin(9600);
  
}
void loop() {
  //
  SendForSonar();
  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println(" cm");  
  delay(100);
  
}

void SendForSonar(){
  digitalWrite (trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite (trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 /2;
}
