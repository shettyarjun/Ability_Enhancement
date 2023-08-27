const int SensorPin=A0;
void setup()
{
  
  pinMode(SensorPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int SensorValue = analogRead(SensorPin);
  float Current = map(SensorValue,0,1023,0,100)/5.0;
  Serial.print("Current");
  Serial.print("Current,2");
  Serial.print("A");
  delay(1000);
}