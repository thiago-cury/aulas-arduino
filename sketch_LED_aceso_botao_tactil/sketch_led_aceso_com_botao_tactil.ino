//Declaracao de uma variavel LED
int LED = 2;

void setup(){
  //Informando que a porta sera utilizada para saida
  pinMode(LED, OUTPUT);
}

void loop(){
  
  //Acende o LED quando fechar o circuito
  digitalWrite(LED, HIGH);
}
