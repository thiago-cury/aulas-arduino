int laser = 2;

void setup() {
  //Informa que a porta 2 do laser vai ser para saida
  pinMode(laser, OUTPUT);
}
 
void loop() {
  //Liga o laser
  digitalWrite(laser, HIGH);
}
