int led1 = 9;
int led2 = 6;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1,HIGH);
  digitalWrite(led2, true);
  
  
  Serial.println("Hola Mundo");
  uno();
  //delay(1500);
  nueve();
  cero();
}
void uno(){
  digitalWrite(4,true);
  digitalWrite(5,true);
  delay(1000);
  digitalWrite(4,false);
  digitalWrite(5,false);
  delay(1000);
 }
 void nueve(){
  digitalWrite(10,true);
  digitalWrite(4,true);
  digitalWrite(7,true);
  digitalWrite(5,true);
  digitalWrite(2,true);
  digitalWrite(3,true);
  
  delay(1500);
  digitalWrite(10,false);
  digitalWrite(5,false);
  digitalWrite(4,false);
  digitalWrite(7,false);
  digitalWrite(2,false);
  digitalWrite(3,false);
  
  delay(1500);
 }
 void cero(){
  digitalWrite(10,true);
  digitalWrite(4,true);
  digitalWrite(7,true);
  digitalWrite(5,true);
  digitalWrite(2,true);
  digitalWrite(8,true);
  
  delay(1500);
  digitalWrite(10,false);
  digitalWrite(5,false);
  digitalWrite(4,false);
  digitalWrite(7,false);
  digitalWrite(2,false);
  digitalWrite(8,false);
  
  delay(1500);
 }
