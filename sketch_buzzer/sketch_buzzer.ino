//Variavel para buzzer 
int buzzer = 2;

//Variaveis para cada frequencia da escala musical
float freqDO = 261.63;
float freqRE = 293.66;
float freqMI = 329.63;
float freqFA = 349.23;
float freqSOL = 391.99;
float freqLA = 440.00;
float freqSI = 493.88;
 
void setup() {
 //define o pino como saída
 pinMode(buzzer,OUTPUT);
}
 
void loop() {
  
 tone(buzzer,freqDO);
 delay(1000);
 
 tone(buzzer,freqRE);
 delay(1000);
 
 tone(buzzer,freqMI);
 delay(1000);
 
 tone(buzzer,freqFA);
 delay(1000);
 
 tone(buzzer,freqSOL);
 delay(1000);
 
 tone(buzzer,freqLA);
 delay(1000);
 
 tone(buzzer,freqSI);
 delay(1000);
}
