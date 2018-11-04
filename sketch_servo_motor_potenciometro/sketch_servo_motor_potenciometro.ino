/* Importando a biblioteca que auxilia
   o gerenciamento de motores servo */
#include <Servo.h>

/* Criando um objeto Servo chamado servo1.
   Atraves desse objeto controlaremos a posiçao do servo. */
Servo servo1;

//Pino digital onde sera conectado o motor servo
int pinoServo1 = 2;

//Pino analogico onde sera conectado o motor servo
int leituraPot = 0;

//Valor que sera lido e mapeado
int valPot; 

//centralizando motor servo na inicializaçao
int posicao = 0;

void setup() {
  
  //Informando em qual porta digital o servo esta ligado
  servo1.attach(pinoServo1);
  
  //Inicializando a porta serial
  Serial.begin(9600);
  
}

void loop() {
  
  valPot = analogRead(leituraPot);
  
  //Mapeando de 0-1023 para 0-180
  valPot = map(valPot, 0,1023, 0,180);
  
  //Escrevendo no motor servo.
  servo1.write(valPot);

  delay(1000);
  
  /* Opcional: imprimir valor do potenciometro */
  Serial.println(valPot); 
}
