#define echo 4
#define trig 5
#define buzzer 6

int maxRange = 50;
int minRange = 0;


void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(buzzer,OUTPUT);
  

}

void loop() {
  
  int olcum = mesafe(maxRange,minRange);
melodi(olcum*10);

}

int mesafe(int maxrange, int minrange)

{
long gecenzaman , yol;

  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

 gecenzaman = pulseIn(echo,HIGH);
 yol = gecenzaman / 58.2;
 delay(50);

 
 if(yol >= maxrange || yol <=minrange)
 return 0;
 return yol;

}
int melodi(int rst)
{
  tone(buzzer,440);
  delay(rst);
  noTone(buzzer);
  delay(rst);
}
