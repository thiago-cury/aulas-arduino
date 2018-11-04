//Declaracao de variaveis
const int pinoLDR = 0;
int valorLDR = 0;

//LED
const int pinoLED = 3;

void setup() {
  //Abrindo conexao serial do Arduino com o computador
  Serial.begin(9600);

  pinMode(pinoLED, OUTPUT);
}

void loop() {
  //Lendo valor do sensor analogico LDR na porta ANALOG IN A0 do Arduino
  valorLDR = analogRead(pinoLDR);

  //Imprimindo o valor lido
  Serial.print("valor lido pelo LDR: ");
  Serial.println(valorLDR);

  /* varia entre 300(sem luminosidade) e 700(com luminosidade) */
  if(valorLDR < 500){
     digitalWrite(pinoLED, HIGH);
  } else {
     digitalWrite(pinoLED, LOW);
  }
  
  //Aguardando meio segundo para a proxima leitura
  delay(500);
}
