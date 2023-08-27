#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

void setup()
{
  Wire.begin();
  Serial.begin(9600);

  mpu.initialize();
  
  Serial.println("MPU6050 Sensor Initialized");
  Serial.println("Reading Accelerometer Data...");
}

void loop()
{
  int16_t accelX, accelY, accelZ;
  
  mpu.getAcceleration(&accelX, &accelY, &accelZ);

  Serial.print("Acceleration - X: ");
  Serial.print(accelX);
  Serial.print("  Y: ");
  Serial.print(accelY);
  Serial.print("  Z: ");
  Serial.println(accelZ);

  delay(100);
}