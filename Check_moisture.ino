void Check_moisture(const RtcDateTime& dt){
  int analog_read;
  float moisture_percent;
  analog_read = analogRead(MOISTURE_SENSOR);
  moisture_percent = ( 100 - ( (analog_read/1023.00) * 100 ) );

  Serial.println(moisture_percent);

  if(moisture_percent < 19 && analogRead(LIGHT_SENSOR) < 600){
    pump();
  }
}
