const int led1=7;
const int led2=8;
const int trig=12;
const int echo=13;

void setup() 
{ 
  // put your setup code here, to run once:
   pinMode(trig,OUTPUT);
   pinMode(echo,INPUT);
   pinMode(led1,OUTPUT);
   pinMode(led2,OUTPUT);
   Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(trig,HIGH);
  delay(100);
  digitalWrite(trig,LOW);
  
  float distance,duration;
  duration=pulseIn(echo,HIGH);
  distance=(duration*0.034)/2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");

  if(distance>=200)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
  }
  else
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
  }
}
