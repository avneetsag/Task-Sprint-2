
int led = 6;
int pir = 5;
int buzzer = 4;
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pir, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(catchPin, OUTPUT);
}

void loop()
{
  if(digitalRead(5)== HIGH)
    {
      Serial.println("Object Detected");
      digitalWrite(led, HIGH);
      analogWrite(buzzer, 200);
      digitalWrite(catchPin, HIGH);
    } 
 else
  {
    Serial.println("No Object Detected");
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(catchPin, LOW);
  }
   delay(1000);
}
