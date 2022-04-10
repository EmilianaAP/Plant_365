void init_rtc(){
  Rtc.Begin();

  RtcDateTime compiled = RtcDateTime(__DATE__, __TIME__);

  if (!Rtc.IsDateTimeValid()){   
    Rtc.SetDateTime(compiled);
  }

  if (Rtc.GetIsWriteProtected()){
    Rtc.SetIsWriteProtected(false);
  }

  if (!Rtc.GetIsRunning()){
    Rtc.SetIsRunning(true);
  }

  RtcDateTime now = Rtc.GetDateTime();
  if (now < compiled){
    Rtc.SetDateTime(compiled);
  }
}
