//Declaracao de duas variaveis, uma para cada LED
int LED1 = 2;
int LED2 = 3;

void setup(){
  //Informando que a porta sera utilizada para saida
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}

void loop(){
  
  //Acende os LEDs durante 1 segundo  
  digitalWrite(LED1,HIGH);      
  digitalWrite(LED2,HIGH);      
  delay(1000);
  
  //Apaga os LEDs durante 1 segundo  
  digitalWrite(LED1,LOW);      
  digitalWrite(LED2,LOW);      
  delay(1000);  
}
