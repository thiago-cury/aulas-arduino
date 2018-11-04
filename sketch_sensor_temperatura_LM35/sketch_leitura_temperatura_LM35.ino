// Define o pino onde o sensor LM35 será conectado
const int LM35 = A0;

// Variável que armazenará a temperatura medida
float temperatura = 0; 

void setup() {
  //Abrir a comunicaçao serial
  Serial.begin(9600);
}
 
void loop() {
  /* Lendo o valor do sensor LM35 atraves da funçao analogRead() 
     fazendo as devidas conversoes */
  temperatura = (float(analogRead(LM35))*5/(1023))/0.01;
  
  //Imprimindo a leitura no serial monitor  
  Serial.print("Temperatura: ");
  Serial.println(temperatura);
  
  delay(2000);
}
