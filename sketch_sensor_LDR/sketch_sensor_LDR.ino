//Declaracao de variaveis
const int pinoLDR = 0;
int valorLDR = 0;

void setup() {
  //Abrindo conexao serial do Arduino com o computador
  Serial.begin(9600);
}

void loop() {
  //Lendo valor do sensor analogico LDR na porta ANALOG IN A0 do Arduino
  valorLDR = analogRead(pinoLDR);

  //Imprimindo o valor lido
  Serial.print("valor lido pelo LDR: ");
  Serial.println(valorLDR);

  //Aguardando meio segundo para a proxima leitura
  delay(500);
}
