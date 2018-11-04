//Constante
#define PI 3.14

//Variavel
float area=0;
float raio=0;

void setup(){
  //Iniciando a comunicacao Serial
  Serial.begin(9600);
}

void loop(){ 
  
  //Entrada de dados fixa
  raio = 10;
  
  //Calculando a area do circulo
  area = PI * (raio*raio);
  
  //Imprimindo a area do circulo
  Serial.print("A area do circulo e: ");
  Serial.println(area);
  
  delay(10000);
}
