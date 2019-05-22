

void setup()
{
Serial.begin(115200);
pinMode(2,OUTPUT);
pinMode(15,INPUT);
}

void loop() 
{

if(digitalRead(15)==LOW)
{
  
 digitalWrite(2,HIGH);
Serial.println(digitalRead(15)==LOW);
}
else
{
  digitalWrite(2,LOW);
Serial.println(digitalRead(15)==LOW);
}
}
