/* Importando a biblioteca que auxilia
   o gerenciamento de motores servo */
#include <Servo.h>

/* Criando um objeto Servo chamado servo1.
   Atraves desse objeto controlaremos a posiçao do servo. */
Servo servo1;

//Pino digital onde sera conectado o motor servo
int pinoServo1 = 2;

//centralizando motor servo na inicializaçao
int posicao = 90;

//Variavel de entrada (Digitada no terminal)
char direcao;

void setup() {
  
  //Informando em qual porta digital o servo esta ligado
  servo1.attach(pinoServo1);
  
  //Inicializando a porta serial
  Serial.begin(9600);
  
}

void loop() {
  /* Lendo "l" para adicionar valores para esquerda.
     ou "r" para subtrair valores para direita */
  direcao=Serial.read();
  
  if(direcao==108 && posicao<175){
    posicao+=15; 
  }else if(direcao==114 && posicao>0){
    posicao-=15;
  }

  //Escrevendo no motor servo.
  servo1.write(posicao);

  delay(1000);
  
  /* Opcional: imprimir tecla digitada e/ou 
     posiçao em graus do motor servo. */
     //Serial.println(int(direcao));
     //Serial.println(int(posicao)); 
}
