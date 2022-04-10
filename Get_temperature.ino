void Get_temperature(){
  int reading = analogRead(TEMPERATURE_SENSOR);

  float voltage = reading * (5000 / 1024.0);

  float temperature = voltage / 10;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" \xC2\xB0");
  Serial.println("C");  
}
