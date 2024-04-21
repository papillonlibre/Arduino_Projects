int potRead = 0;
int photoRead = 0;
int buttonState = 0;

void setup()
{
  pinMode(A1, INPUT);
  Serial.begin(9600);
  pinMode(4, INPUT);
}


void loop()
{
  potRead = analogRead(A0);
  buttonState = digitalRead(4);
  
  Serial.println(buttonState);
  //Serial.println(photoRead);

  if (buttonState == 1){
    if (potRead < 333){
      Serial.print("I'm ");
      digitalWrite(12, HIGH);
      tone(8, 392, 200);
      delay(200); // Wait for 1000 millisecond(s)
      digitalWrite(12, LOW);
      delay(200); // Wait for 1000 millisecond(s)
    
      Serial.print("a "); 
      digitalWrite(10, HIGH);
      tone(8, 392, 200); 
      delay(100); // Wait for 1000 millisecond(s)
      digitalWrite(10, LOW);
      delay(100); // Wait for 1000 millisecond(s)
    
      Serial.print("lit");
      digitalWrite(10, HIGH);
      tone(8,392, 200);
      delay(100);
      digitalWrite(10, LOW);
      delay(100);
      Serial.print("tle ");
      digitalWrite(10, HIGH);
      tone(8,392, 200);
      delay(300);
      digitalWrite(10, LOW);
      delay(200);
      
      Serial.print("tea");
      digitalWrite(10, HIGH);
      tone(8,392, 200);
      delay(200); // Wait for 1000 millisecond(s)
      digitalWrite(10, LOW);
      delay(100); // Wait for 1000 millisecond(s)
    
      Serial.println("pot ");
      digitalWrite(10, HIGH);
      tone(8,392, 200);
      delay(300); // Wait for 1000 millisecond(s)
      digitalWrite(10, LOW);
      delay(300); // Wait for 1000 millisecond(s)
    
      Serial.print("short ");
      digitalWrite(12, HIGH);
      tone(8,261, 200);
      delay(350);
      digitalWrite(12, LOW);
      delay(100);
    
      Serial.print("and ");
      digitalWrite(12, HIGH);
      delay(200); // Wait for 1000 millisecond(s)
      tone(8,261, 200);
      digitalWrite(12, LOW);
      delay(200); // Wait for 1000 millisecond(s)
    
      Serial.println("stout ");
      digitalWrite(12, HIGH);
       tone(8,392, 200);
      delay(350); // Wait for 1000 millisecond(s)
      digitalWrite(12, LOW);
      delay(350); // Wait for 1000 millisecond(s)
    
      Serial.print("here ");
      digitalWrite(12, HIGH);
      tone(8,294, 200);
      delay(300);
      digitalWrite(12, LOW);
      delay(350);
    
      Serial.print("is ");
      digitalWrite(12, HIGH);
      tone(8,294, 200);
      delay(250); // Wait for 250 millisecond(s)
      digitalWrite(12, LOW);
      delay(250); // Wait for 250 millisecond(s)
    
      Serial.print("my ");
      digitalWrite(12, HIGH);
      tone(8,294, 200);
      delay(250); // Wait for 1000 millisecond(s)
      digitalWrite(12, LOW);
      delay(250); // Wait for 1000 millisecond(s)
      
      Serial.print("han");
      digitalWrite(12, HIGH);
      tone(8,392, 200);
      delay(300);
      digitalWrite(12, LOW);
      delay(50);
      
      Serial.println("dle ");
      digitalWrite(12, HIGH);
      tone(8,392, 200);
      delay(300);
      digitalWrite(12, LOW);
      delay(300);
    
      Serial.print("here ");
      digitalWrite(12, HIGH);
      tone(8,294, 200);
      delay(300);
      digitalWrite(12, LOW);
      delay(300);
      
      Serial.print("is ");
      digitalWrite(12, HIGH);
      delay(250); // Wait for 1000 millisecond(s)
      tone(8,294, 200);
      digitalWrite(12, LOW);
      delay(250); // Wait for 1000 millisecond(s)
    
      Serial.print("my ");
      digitalWrite(12, HIGH);
      tone(8,294, 200);
      delay(250); // Wait for 1000 millisecond(s)
      digitalWrite(12, LOW);
      delay(250); // Wait for 1000 millisecond(s)
      
      Serial.println("spout ");
      digitalWrite(12, HIGH);
      tone(8,392, 200);
      delay(500);
      digitalWrite(12, LOW);
      delay(500);
      } 
  

  else{
    //Serial.print("I'm ");
      Serial.print("red ");
      digitalWrite(12, HIGH);
      //tone(8, 392, 200);
      delay(300); // Wait for 1000 millisecond(s)
      digitalWrite(12, LOW);
      delay(300); // Wait for 1000 millisecond(s)
    
      //Serial.print("a "); 
      Serial.print("red ");
      digitalWrite(12, HIGH);
      //tone(8, 392, 200); 
      delay(200); // Wait for 1000 millisecond(s)
      digitalWrite(12, LOW);
      delay(200); // Wait for 1000 millisecond(s)
    
      //Serial.print("lit");
      Serial.print("red ");
      digitalWrite(12, HIGH);
      //tone(8,392, 200);
      delay(300);
      digitalWrite(12, LOW);
      delay(300);
      //Serial.print("tle ");
      digitalWrite(12, HIGH);
      //tone(8,392, 200);
      delay(100);
      digitalWrite(12, LOW);
      delay(100);
      
      //Serial.print("tea");
      Serial.print("red ");
      digitalWrite(12, HIGH);
      //tone(8,392, 200);
      delay(250); // Wait for 1000 millisecond(s)
      digitalWrite(12, LOW);
      delay(250); // Wait for 1000 millisecond(s)
    
      //Serial.println("pot ");
      Serial.print("red ");
      digitalWrite(12, HIGH);
      //tone(8,392, 200);
      delay(250); // Wait for 1000 millisecond(s)
      digitalWrite(12, LOW);
      delay(250); // Wait for 1000 millisecond(s)
    
      //Serial.print("short ");
      Serial.print("blue ");
      digitalWrite(10, HIGH);
      //tone(8,261, 200);
      delay(500);
      digitalWrite(10, LOW);
      delay(500);
    
      //Serial.print("and ");
      Serial.print("red ");
      digitalWrite(12, HIGH);
      delay(250); // Wait for 1000 millisecond(s)
      //tone(8,261, 200);
      digitalWrite(12, LOW);
      delay(250); // Wait for 1000 millisecond(s)
    
      //Serial.println("stout ");
      Serial.print("blue ");
      digitalWrite(10, HIGH);
      //tone(8,392, 200);
      delay(250); // Wait for 1000 millisecond(s)
      digitalWrite(10, LOW);
      delay(250); // Wait for 1000 millisecond(s)
    
      //Serial.print("here ");
      Serial.print("green ");
      digitalWrite(11, HIGH);
      //tone(8,294, 200);
      delay(500);
      digitalWrite(11, LOW);
      delay(500);
    
      //Serial.print("is ");
      Serial.print("green ");
      digitalWrite(11, HIGH);
      //tone(8,294, 200);
      delay(250); // Wait for 250 millisecond(s)
      digitalWrite(11, LOW);
      delay(250); // Wait for 250 millisecond(s)
    
      //Serial.print("my ");
      Serial.print("green ");
      digitalWrite(11, HIGH);
      //tone(8,294, 200);
      delay(250); // Wait for 1000 millisecond(s)
      digitalWrite(11, LOW);
      delay(250); // Wait for 1000 millisecond(s)
      
      //Serial.print("han");
      Serial.print("green ");
      digitalWrite(11, HIGH);
      //tone(8,392, 200);
      delay(500);
      digitalWrite(11, LOW);
      delay(500);
      
      //Serial.println("dle ");
      Serial.print("green ");
      digitalWrite(11, HIGH);
      //tone(8,392, 200);
      delay(500);
      digitalWrite(11, LOW);
      delay(500);
    
      //Serial.print("here ");
      Serial.print("green ");
      digitalWrite(11, HIGH);
      //tone(8,294, 200);
      delay(500);
      digitalWrite(11, LOW);
      delay(500);
      
      //Serial.print("is ");
      Serial.print("blue ");
      digitalWrite(10, HIGH);
      delay(250); // Wait for 1000 millisecond(s)
      //tone(8,294, 200);
      digitalWrite(10, LOW);
      delay(250); // Wait for 1000 millisecond(s)
    
      //Serial.print("my ");
      Serial.print("green ");
      digitalWrite(11, HIGH);
      //tone(8,294, 200);
      delay(250); // Wait for 1000 millisecond(s)
      digitalWrite(11, LOW);
      delay(250); // Wait for 1000 millisecond(s)
      
      //Serial.println("spout ");
      Serial.print("blue ");
      digitalWrite(10, HIGH);
      //tone(8,392, 200);
      delay(500);
      digitalWrite(10, LOW);
      delay(500);
      } 
  }
  
}
