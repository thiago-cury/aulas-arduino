/* Importando a biblioteca que auxilia
   o gerenciamento de motores servo */
#include <Servo.h>

/* Criando um objeto Servo chamado servo1.
   Atraves desse objeto controlaremos a posiçao do servo. */
Servo servo1;

//Pino digital onde sera conectado o motor servo
int pinoServo1=2;
//Pino analogico onde sera conectado o potenciometro
int pinoPot=0;
//Valor lido do potenciometro
int leituraPot=0;

void setup() {              
  //Informando em qual porta digital o servo esta ligado
  servo1.attach(pinoServo1);  

  //Inicializando a porta serial
  Serial.begin(9600);
}

void loop() {
  //Lendo o valor do potenciometro
  leituraPot = analogRead(pinoPot);

  //Mapeando os valores lidos pelo potenciometro para no maximo 180 graus. 
  leituraPot = map(leituraPot, 0, 1023, 0, 179);

  //Escrevendo no motor servo.
  servo1.write(leituraPot);
}
