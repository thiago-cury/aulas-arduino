//Declaração das variáveis
const int pinoRED = 9;
const int pinoGREEN = 10;
const int pinoBLUE = 11;
 
void setup() {
  //Definindo os pinos digitais como saída
  pinMode(pinoRED,OUTPUT);
  pinMode(pinoGREEN,OUTPUT);
  pinMode(pinoBLUE,OUTPUT);
}
 
void loop() {   
  
  //Acendendo as cores individualmente.
  digitalWrite(pinoRED,HIGH);
  delay(1000);
  digitalWrite(pinoRED,LOW);    

  digitalWrite(pinoGREEN,HIGH);
  delay(1000);
  digitalWrite(pinoGREEN,LOW);
  
  digitalWrite(pinoBLUE,HIGH);
  delay(1000);
  digitalWrite(pinoBLUE,LOW);
   
}
