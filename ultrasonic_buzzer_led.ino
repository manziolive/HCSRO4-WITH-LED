int echopin= 6;
int trigpin=7;
long duration;
int led1=8;
int led2=9;
int led3=10;
int buzzer=3;
int sound=250;

void setup() {
pinMode(echopin,INPUT);// put your setup code here, to run once:
pinMode(trigpin,OUTPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3 ,OUTPUT);


Serial.begin(9600);
Serial.println("ultrasonicSensor");
Serial.println("distancemeasuring");

}

void loop() {
digitalWrite(trigpin,LOW);// put your main code here, to run repeatedly:
delayMicroseconds(2); 

digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);
duration=(echopin,HIGH);
distance=(duration*0.034/2);
 Serial.print("Distance:");
Serial.print(distance);
Serial.print("cm");
