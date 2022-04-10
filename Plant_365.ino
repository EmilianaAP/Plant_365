#include <ThreeWire.h>  
#include <RtcDS1302.h>

ThreeWire REAL_TIME_MODULE(4,5,2); // DAT, CLK, RST
RtcDS1302<ThreeWire> Rtc(REAL_TIME_MODULE);

const int MOISTURE_SENSOR = A0;
const int LIGHT_SENSOR = A1;
const int TEMPERATURE_SENSOR = A2;
const int RELAY_PIN =  A0;

void setup() {
  Serial.begin(9600);
  pinMode(RELAY_PIN, OUTPUT);
  init_rtc();
}

void loop() {
  RtcDateTime now = Rtc.GetDateTime();

  //Check_light(now);
  //Check_moisture(now);
  //Get_temperature();
  pump();

  if (!now.IsValid())
  {
     Serial.println("RTC lost confidence in the DateTime!");
  }

  //delay(2UL * 60UL * 1000UL); //2min
  //delay(5000);
}
