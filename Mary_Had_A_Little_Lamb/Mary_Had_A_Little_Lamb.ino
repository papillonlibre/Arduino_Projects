int buttonState = 0;

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(4, INPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}


void loop()
{
  buttonState = digitalRead(4);
  if (buttonState == 1){
     
  // Ma-ry
  digitalWrite(8, HIGH);
  //Serial.print("Ma");
  tone(10, 329, 200);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(8, HIGH);
  //Serial.print("ry "); 
  tone(10, 294, 200); 
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(200); // Wait for 1000 millisecond(s)
  // had a
  digitalWrite(12, HIGH);
  //Serial.print("had ");
  tone(10, 261, 200);
  delay(300);
  digitalWrite(12, LOW);
  delay(300);
  digitalWrite(12, HIGH);
  tone(10, 294, 200);
  //Serial.print("a ");
  delay(100);
  digitalWrite(12, LOW);
  delay(100);
  // little
  digitalWrite(8, HIGH);
  tone(10, 294, 200);
  //Serial.print("lit");
  delay(250); // Wait for 1000 millisecond(s)
  tone(10, 329, 200);
  digitalWrite(8, LOW);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(8, HIGH);
  //Serial.print("tle ");
  tone(10, 329, 200);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(250); // Wait for 1000 millisecond(s)
  // lamb
  digitalWrite(12, HIGH);
  tone(10, 329, 200);
  //Serial.println("lamb ");
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  // little
  digitalWrite(8, HIGH);
  delay(250); // Wait for 1000 millisecond(s)
  //Serial.print("lit");
  tone(10, 294, 200);
  digitalWrite(8, LOW);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(8, HIGH);
  //Serial.print("tle ");
   tone(10, 294, 200);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(250); // Wait for 1000 millisecond(s)
  // lamb
  digitalWrite(12, HIGH);
  //Serial.println("lamb");
   tone(10, 294, 200);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  // little lamb 2 LED's
  
  digitalWrite(8, HIGH);
  digitalWrite(12, HIGH);
  //Serial.print("lit");
  delay(250); // Wait for 1000 millisecond(s)
   tone(10, 329, 200);
  digitalWrite(8, LOW);
  digitalWrite(12, LOW);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(8, HIGH);
  digitalWrite(12, HIGH);
  //Serial.print("tle ");
  tone(10, 392, 200);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  digitalWrite(12, LOW);
  delay(250); // Wait for 1000 millisecond(s)
  
  digitalWrite(12, HIGH);
  digitalWrite(8, HIGH);
  //Serial.println("lamb ");
  tone(10, 392, 200);
  delay(500);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  delay(500);
  } 
}
