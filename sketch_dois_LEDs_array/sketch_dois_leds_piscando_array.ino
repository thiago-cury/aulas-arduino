//Declaracao de uma variavel unidimensional(Array) para controlar dois ou mais LEDs
int arrayLED[] = {2,3};

void setup(){
  //Informando que a porta sera utilizada para saida
  pinMode(arrayLED[0],OUTPUT);
  pinMode(arrayLED[1],OUTPUT);
}

void loop(){

  //Acende os LEDs durante 1 segundo 
  digitalWrite(arrayLED[0],HIGH);      
  digitalWrite(arrayLED[1],LOW);      
  delay(2000);

  //Apaga os LEDs durante 1 segundo  
  digitalWrite(arrayLED[0],LOW);      
  digitalWrite(arrayLED[1],HIGH);      
  
  delay(1000);  
}
