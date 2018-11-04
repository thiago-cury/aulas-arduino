#include <Ultrasonic.h>

#define pinoTrig 2
#define pinoEcho 3

//Instanciando um objeto chamado ultrasonic.
  /* Passando os pinos que serao utilizados.
     primeiro parametro: trigger
     segundo parametro: echo */
Ultrasonic ultrasonic(pinoTrig, pinoEcho);

void setup(){ 
  //Iniciando a porta serial para verificar a leitura do sensor ultrasonico
  Serial.begin(9600);
}

void loop(){

    /* Criando variavel chamada dist para receber a 
     distancia.*/
  long dist = (ultrasonic.timing()); //timing() retorna a distancia em milissegundos
  
  /* Criando duas variaveis para converter a distancia em CM e IN (polegadas) */
  float cm, in;
   
  /* convertendo as distancias a partir da funçao convert */ 
  cm = ultrasonic.convert(dist, Ultrasonic::CM);
  in = ultrasonic.convert(dist, Ultrasonic::IN);
 
  //Imprimindo resultados 
  Serial.print("Dist. em CM: ");
  Serial.print(cm);

  Serial.print(" - Dist. em POL: ");
  Serial.println(in);
    
  //Aguardando meio segundo para fazer a leitura novamente
  delay(500);
}
