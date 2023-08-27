int DetectionPin=10;
bool detect = false;
int led = 13;
void setup() 
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(DetectionPin,INPUT);
  Serial.println("Starting...");
}

void loop() 
{
  detect=digitalRead(DetectionPin);
  if(detect==HIGH)
  {
    digitalWrite(led,HIGH);
    Serial.println("Movement Detected");
    delay(500);
  }
  else
  {
    digitalWrite(led,LOW);
    Serial.println("NO Movement Detected");
  }
}
