int IN1=2;
int IN2=3;
int IN3=4;
int IN4=5;
int sensor1=22;
int sensor2=23;
byte veladel=255;
byte velstop=0;
byte velgiro=128;
void setup() {
  pinMode(IN1,1);
  pinMode(IN2,1);
  pinMode(IN3,1);
  pinMode(IN4,1);
  pinMode(sensor1,0);
  pinMode(sensor2,0);
  Serial.begin(9600);
}

void loop() {
int s1=digitalRead(sensor1);
int s2=digitalRead(sensor2);
Serial.println(s1);

if (s1==1 && s2==1){//SIGUE LA LINEA NEGRA RECTO
adelante();}

if (s1==0 && s2==1){//SIGUE LA LINEA HACIA LA DERECHA
  giroizquierda();}
if (s1==1 && s2==0){//SIGUE LA LINEA HACIA LA IZQUIERDA
  giroderecha();}
}

void adelante(){
  analogWrite(IN1,veladel);
  analogWrite(IN2,velstop);
  analogWrite(IN3,veladel);
  analogWrite(IN4,velstop);
  Serial.println("adelante");}

void giroderecha(){
  analogWrite(IN1,velgiro);
  analogWrite(IN2,velstop);
  analogWrite(IN3,veladel);
  analogWrite(IN4,velstop);
  Serial.println("giro derecha");}

void giroizquierda(){
  analogWrite(IN1,veladel);
  analogWrite(IN2,velstop);
  analogWrite(IN3,velgiro);
  analogWrite(IN4,velstop);
  Serial.println("giro izquierda");}
