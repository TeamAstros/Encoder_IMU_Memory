void readEncoders()
{
  //Serial.println("RE");
  if(Serial2.available())
  {
    E1=Serial2.readStringUntil('/');
    if(E1.toInt()!=0)
      e1=E1.toInt();
    
  }
  //Serial.println(e1);
}
