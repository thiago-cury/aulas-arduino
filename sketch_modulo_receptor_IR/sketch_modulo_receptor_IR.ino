#include <boarddefs.h>
#include <ir_Lego_PF_BitStreamEncoder.h>
#include <IRremoteInt.h>
#include <IRremote.h>

int pinoIR = 2;  
float valorRecebido = 0;  
  
IRrecv irrecv(pinoIR);  
decode_results results;  
  
void setup() {  
  //Iniciando a comunicação serial
  Serial.begin(9600);  
  //Inicializando o módulo receptor IR
  irrecv.enableIRIn(); 
}  
   
void loop() {  
  
  if (irrecv.decode(&results)) {
     
    Serial.print("Valor recebido: ");
    //Convertendo para Hexadecimal
    Serial.println(results.value, HEX);
    valorRecebido = (results.value);  

    //Lê o próximo valor    
    irrecv.resume();
  }  
}
