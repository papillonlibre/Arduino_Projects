int potRead = 0;
int photoRead = 0;

void setup() {
  // put your setup code here, to run once:

  //pinMode(0, INPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  potRead = analogRead(A0);
  photoRead = analogRead(A1);
  Serial.println(potRead);
  Serial.println(photoRead);
  if (photoRead < 162){
    if (potRead < 333){
      digitalWrite(11, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(12, LOW);
    }
    if (potRead >= 333 && potRead < 666){
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
    }
    if (potRead >= 666){
      digitalWrite(12, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
    }
  }
  else {
    digitalWrite(12, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
  }
  delay(300);

}
