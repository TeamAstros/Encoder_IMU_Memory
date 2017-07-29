int e1,e2,ee1=0;
String E1,E2,YAW;
const int push = 22;
int encoderVal[5];
int haha;
int itr=0,caseFlag=0;
int yaw;

#include<SoftwareSerial.h>

SoftwareSerial sabertooth(2,3);

void setup() 
{
  Serial.begin(9600);
  Serial1.begin(9600);  //sabertooth
  Serial2.begin(9600);  //encoder
  Serial3.begin(9600);

  pinMode(push,INPUT_PULLUP);
  pinMode(50,OUTPUT);
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
}

void loop() 
{
  //Serial.println("LOOP");
  readEncoders();
  if(!digitalRead(push)) //Button Pressed
  {
    Serial.print("HII");
    Serial.println(itr);
    digitalWrite(13,HIGH);
    while(!digitalRead(push));
    readEncoders();
    encoderVal[itr] = e1-ee1; //Current - Previous
    haha=e1;
    ee1=e1;
    caseFlag++;
    itr++;
  }
  
  if(caseFlag==2)
  {
    digitalWrite(13,LOW);
    digitalWrite(50,HIGH);
    delay(10);
    digitalWrite(50,LOW);
    Serial.println();
    Serial.println("YOO");
    Serial.print(e1);
    Serial.print(" ");
    Serial.println(encoderVal[1]);
    Serial.println();
    //delay(3000);
    //recall();
  }
}
