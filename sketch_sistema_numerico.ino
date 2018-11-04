void setup(){
  //Iniciando a comunicaçao Serial
  Serial.begin(9600);
}

void loop(){  
  //Imprime somente o caracter A
  Serial.print("Caracter: ");
  Serial.println("A");
  //Imprime o numero binario do caracter A
  Serial.print("Binario: ");
  Serial.println('A', BIN);
  //Imprime o numero octal do caracter A
  Serial.print("Octal: ");
  Serial.println('A', OCT);
  //Imprime o numero Hexadecimal do caracter A
  Serial.print("Hexadecimal: ");
  Serial.println('A', HEX);
  //Imprime o numero Decimal do caracter A
  Serial.print("Decimal: ");
  Serial.println('A', DEC);
  
  delay(1000);
}
