
 
void setup()
{
  pinMode(2,INPUT);
  pinMode(15,OUTPUT);
  Serial.begin(115200);
}
 
void loop()
{
 int Detected;
  Detected = digitalRead(2);
 
  if(Detected=HIGH)
  {
    
    Serial.println("Presence detected");
  }
 
  delay(500);
}
