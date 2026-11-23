float powerVoltage=5;
void setup() {
  /
  Serial.begin(9600);
}
void loop() {
  float temperature;
  // read the input on analog pin 0:
  float sensorValue = analogRead(A0);
  // print out the value you read:
  temperature=(sensorValue/1023)*powerVoltage*100;
  Serial.print("The room temperature degree is:");
  Serial.println(temperature,1);
  delay(1);        
}