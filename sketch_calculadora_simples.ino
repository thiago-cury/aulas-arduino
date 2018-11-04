//Declaracao de variaveis
float numero1 = 0;
float numero2 = 0;
float resposta = 0;

void setup(){
  //Iniciando a comunicacao Serial
  Serial.begin(9600);
}

void loop(){  
  //Entrada de dados fixa
  numero1 = 10;
  numero2 = 5;
  
  //Soma
  Serial.print("Soma: ");
  resposta = numero1 + numero2;
  Serial.println(resposta);

  //Subtracao
  Serial.print("Subtracao: ");
  resposta = numero1 - numero2;
  Serial.println(resposta);  
  
  //Multiplicacao
  Serial.print("Multiplicacao: ");
  resposta = numero1 * numero2;
  Serial.println(resposta);  
  
  //Divisao
  Serial.print("Divisao: ");
  resposta = numero1 / numero2;
  Serial.println(resposta);
  
  delay(10000);
}
