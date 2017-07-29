void recall()
{
  for(int i=0;i<2;i++)
  {
    while(true)
    {
      readEncoders();
      if(e1>=encoderVal[i])
      {
        Serial1.write(0);
        break;
      }
      Serial1.write(32);
      Serial1.write(160);
    }
      //khatt();
  }
}

