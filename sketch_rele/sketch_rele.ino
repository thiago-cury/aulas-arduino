int rele = 2;

void setup() {
  //Informa que a porta 2 do rele vai ser para saida
  pinMode(rele, OUTPUT);
}
 
void loop() {
  //Liga o rele
  digitalWrite(rele, HIGH);
  delay(2000);
  
  //Desliga o rele
  digitalWrite(rele, LOW);
  delay(2000);  
}
