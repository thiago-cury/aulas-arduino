//Declaracao de uma variavel LED
int LED = 2;

void setup(){
  //Informando que a porta sera utilizada para saida
  pinMode(LED, OUTPUT);
}

void loop(){
  
  //Acende o LED durante 1 segundo
  digitalWrite(LED, HIGH);
  delay(1000);
  
  //Apaga o LED durante 1 segundo
  digitalWrite(LED, LOW);
  delay(1000);  
}
