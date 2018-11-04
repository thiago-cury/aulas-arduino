/* Declaracao de uma variavel unidimensional (Array) para 
   controlar dois ou mais LEDs, nesse exemplo 3 LEDs. */
int arrayLED[] = {2,3,4};

const int tamanhoArray = 3;
int cont = 0;

void setup(){
  /* Informando que a porta sera utilizada para saida, no entanto 
     vamos rodar um for para que as portas sejam inicializadas. */
  for(int i=0 ; i<tamanhoArray ; i++){
    pinMode(arrayLED[i], OUTPUT);
  }
}

void loop(){
  //Acende o LED na posicao atual do array durante 1 segundo
  digitalWrite(arrayLED[cont], HIGH);  
  delay(1000);
  
  //Apaga o LED na posicao atual do array durante 1 segundo  
  digitalWrite(arrayLED[cont], LOW);       
  delay(1000);  
  
  /* Testando se ja chegou no final do Array, ou seja, se ele for 
     igual a dois, entao, inicializamos novamente para zero. */
  if(cont==2){
    cont=0;
  }else{
    cont++;
  }
}
