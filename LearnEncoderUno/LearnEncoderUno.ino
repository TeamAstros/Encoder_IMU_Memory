int cnt=0;

void setup() {
  pinMode(2,INPUT_PULLUP);
pinMode(4,INPUT);
Serial.begin(9600);
}

//void (*resetFunc)(void)=0;

void loop() 
{
  attachInterrupt(digitalPinToInterrupt(2),count,RISING);
  detachInterrupt(digitalPinToInterrupt(2));
  if(digitalRead(4)==HIGH)
  {
    //resetFunc();
  }
}

void count()
{
  cnt++;
  Serial.print((int)cnt);
  Serial.println("/");
}


