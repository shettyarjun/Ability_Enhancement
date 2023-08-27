void setup()
{
  Serial.begin(9600);
  pinMode(10, INPUT); // Setup for leads off detection LO +
  pinMode(11, INPUT); // Setup for leads off detection LO -
}

void loop() 
{
  if((digitalRead(10) == 1)||(digitalRead(11) == 1))
  {
    Serial.println('!');
  }
  else
  {
    Serial.println(analogRead(A0));
  }
  delay(1);
}