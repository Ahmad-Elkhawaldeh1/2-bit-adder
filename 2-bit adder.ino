



int A0Pin = 12;
int A1Pin = 11;
int B0Pin = 10;
int B1Pin = 9;

int LED0Pin = 6;
int LED1Pin = 5;
int LED2Pin = 4;

void setup()
{
  pinMode(A0Pin, INPUT);
  pinMode(A1Pin, INPUT);
  pinMode(B0Pin, INPUT);
  pinMode(B1Pin, INPUT);

  pinMode(LED0Pin, OUTPUT);
  pinMode(LED1Pin, OUTPUT);
  pinMode(LED2Pin, OUTPUT);
}

void loop()
{ 
  int b1Value = digitalRead(A0Pin);
  int b2Value = digitalRead(A1Pin);
  int b3Value = digitalRead(B0Pin);
  int b4Value = digitalRead(B1Pin);

  digitalWrite(LED0Pin, LOW);
  digitalWrite(LED1Pin, LOW);
  digitalWrite(LED2Pin, LOW);

  if (b1Value == HIGH)
  {
    digitalWrite(LED0Pin,HIGH);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,LOW);
  }
  if (b2Value == HIGH)
  {
    digitalWrite(LED0Pin,HIGH);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,LOW);
  }
  if (b3Value == HIGH)
  {
    digitalWrite(LED0Pin,HIGH);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,LOW);
  }
    if (b4Value == HIGH)
  {
    digitalWrite(LED0Pin,HIGH);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,LOW);
  }
  if(b1Value == HIGH && b3Value == HIGH )
  {
    digitalWrite(LED0Pin,LOW);
    digitalWrite(LED1Pin,HIGH);
    digitalWrite(LED2Pin,LOW);
  }
  if(b2Value == HIGH && b4Value == HIGH )
  {
    digitalWrite(LED0Pin,LOW);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,HIGH);
  }
  if(b2Value == HIGH && b3Value == LOW && b4Value == LOW)
  {
   digitalWrite(LED0Pin,LOW);
   digitalWrite(LED1Pin,HIGH);
   digitalWrite(LED2Pin,LOW);
  }
    if(b1Value == LOW && b2Value == LOW && b4Value == HIGH)
  {
    digitalWrite(LED0Pin,LOW);
    digitalWrite(LED1Pin,HIGH);
    digitalWrite(LED2Pin,LOW);
  }
  if(b1Value == HIGH && b2Value == HIGH)
  {
    digitalWrite(LED0Pin,HIGH);
    digitalWrite(LED1Pin,HIGH);
    digitalWrite(LED2Pin,LOW);
  }
  if(b3Value == HIGH && b4Value == HIGH)
  {
    digitalWrite(LED0Pin,LOW);
    digitalWrite(LED1Pin,HIGH);
    digitalWrite(LED2Pin,LOW);
  }
  if(b1Value == HIGH && b2Value == HIGH && b4Value == HIGH)
  {
    digitalWrite(LED0Pin,LOW);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,HIGH);
   }
   if(b2Value == HIGH && b4Value == HIGH && b2Value == HIGH)
  {
    digitalWrite(LED0Pin,LOW);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,HIGH);
  }  
  if(b1Value == HIGH && b2Value == HIGH && b3Value == HIGH)
  {
    digitalWrite(LED0Pin,HIGH);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,HIGH);
  }
   if(b3Value == HIGH && b4Value == HIGH && b1Value == HIGH)
  {
    digitalWrite(LED0Pin,HIGH);
    digitalWrite(LED1Pin,LOW);
    digitalWrite(LED2Pin,HIGH);
  }
  if(b1Value == HIGH && b2Value == 
     HIGH && b3Value == HIGH && b4Value == HIGH)
  {
    digitalWrite(LED0Pin,LOW);
    digitalWrite(LED1Pin,HIGH);
    digitalWrite(LED2Pin,HIGH);
  }
  delay(10);
}
