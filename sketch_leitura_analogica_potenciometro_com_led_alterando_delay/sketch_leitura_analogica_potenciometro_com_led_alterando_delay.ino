int leituraPot = 0;
int valPotTime = 0;
int LED = 2;

void setup(){
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop(){
  
  //0 - 1024 se ligado em 5V
  valPotTime = analogRead(leituraPot);

  //100 - 800 - tempo do delay, conforme potenciometro
  valPotTime = map(valPotTime,0,1023,100,800); 
  
  digitalWrite(LED, HIGH);
  delay(valPotTime);
  digitalWrite(LED, LOW);
  delay(valPotTime);  
  
  //Imprime valor lido no potenciometro so para conferencia
  Serial.println(valPotTime);
}
