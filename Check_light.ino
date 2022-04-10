void Check_light(const RtcDateTime& dt){
  switch(dt.Month()){
    case 1: //Jan
      if(dt.Hour() > 8 && dt.Hour() < 15){
        if (analogRead(LIGHT_SENSOR) < 600){
          Serial.println("Not enought light");
        }
      }
      break;
      
    case 2: //Feb
      if(dt.Hour() > 8 && dt.Hour() < 16){
        if (analogRead(LIGHT_SENSOR) < 600){
          Serial.println("Not enought light");
        }
      }
      break;

    case 3: //Mar
      if(dt.Hour() > 7 && dt.Hour() < 17){
        if (analogRead(LIGHT_SENSOR) < 600){
          Serial.println("Not enought light");
        }
      }
      break;

    case 4: //Apr
      if(dt.Hour() > 7 && dt.Hour() < 19){
        if (analogRead(LIGHT_SENSOR) < 600){
          Serial.println("Not enought light");
        }
      }
      break;

    case 5: //May
      if(dt.Hour() > 6 && dt.Hour() < 20){
        if (analogRead(LIGHT_SENSOR) < 600){
          Serial.println("Not enought light");
        }
      }
      break;

    case 6: //Jun
      if(dt.Hour() > 6 && dt.Hour() < 20){
        if (analogRead(LIGHT_SENSOR) < 600){
          Serial.println("Not enought light");
        }
      }
      break;

    case 7: //Jul
      if(dt.Hour() > 6 && dt.Hour() < 20){
        if (analogRead(LIGHT_SENSOR) < 600){
          Serial.println("Not enought light");
        }
      }
      break;

    case 8: //Aug
      if(dt.Hour() > 7 && dt.Hour() < 19){
        if (analogRead(LIGHT_SENSOR) < 600){
          Serial.println("Not enought light");
        }
      }
      break;

    case 9: //Sep
      if(dt.Hour() > 7 && dt.Hour() < 18){
        if (analogRead(LIGHT_SENSOR) < 600){
          Serial.println("Not enought light");
        }
      }
      break;

    case 10: //Oct
      if(dt.Hour() > 8 && dt.Hour() < 19){
        if (analogRead(LIGHT_SENSOR) < 600){
          Serial.println("Not enought light");
        }
      }
      break;

    case 11: //Nov
      if(dt.Hour() > 8 && dt.Hour() < 17){
        if (analogRead(LIGHT_SENSOR) < 600){
          Serial.println("Not enought light");
        }
      }
      break;

    case 12: //Dec
      if(dt.Hour() > 8 && dt.Hour() < 17){
        if (analogRead(LIGHT_SENSOR) < 600){
          Serial.println("Not enought light");
        }
      }
      break;
  }
}
