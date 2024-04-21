/*

#include <Servo.h>
int potRead = 0;
int min = 85;
int max = 130;
int center = 98;
int ServoAngle;


Servo myServo;

void setup() {
  pinMode(9,OUTPUT);
  pinMode(A0, INPUT);
  myServo.attach(9);
  myServo.write(center);
  
  
}
void loop(){
  potRead = analogRead(A0);
  ServoAngle = map(potRead, 0, 1023, min, max);

  myServo.write(ServoAngle);

  Serial.print("Pot read: "  + potRead);
  Serial.print("   ServoAngle: " + ServoAngle);
  
  
 }\

 */
 /*

 int duration; 
int distance; 
int sum = 0;
int average = 0;
const int echoPin = 4;
const int trigPin = 5;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600); 
}
void loop() {
  
  for (int i = 0; i < 5; i++){
    sendForSonar();
    sum += distance;
  }
  average /= 5;
  Serial.print ("average: ");
  Serial.print(average);
  Serial.println(" cm");
  
  sum = 0;
  average = 0;

}

void sendForSonar() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  if(duration * 0.034 / 2 < 30){
    distance = duration * 0.034 / 2; 
  }
}


*/

#include <Servo.h>
 
int duration; 
int distance; 
const int echoPin = 4;
const int trigPin = 5;
 
int sampleSize = 5;
int sum = 0;
int avg = 0;
 
Servo myServo;
int servoAngle;
 
// -------------------------------------------------------------------
// These are the variables you need to change to the angles you found.
 
int SERVO_POS = 98;  // INITIAL PARALLEL SERVO POSITION
int SERVO_RIGHT = 85; //MINIMUM SERVO ANGLE
int SERVO_LEFT = 130; //MAXIMUM SERVO ANGLE
 
// -------------------------------------------------------------------
 
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600); 
  myServo.attach(9);
  myServo.write(SERVO_POS);
 
}
void loop() {
  for(int i = 0; i<sampleSize; i++){
    sendForSonar();
    sum += distance;
    delay(20);
  }
  avg = sum/sampleSize;
  
  servoAngle = map(avg, 15, 35, SERVO_LEFT, SERVO_RIGHT);
  myServo.write(servoAngle);
  Serial.println(servoAngle);
  sum = 0;
  avg = 0;
 
  delay(10);
}
 
void sendForSonar() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  if(duration * 0.034 / 2 < 30){
    distance = duration * 0.034 / 2; 
  }
}
 
