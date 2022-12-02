#include <Wire.h>

char recebido;

void setup(){
  Serial.begin(9600);
  
  //o número associado ao arduino é passado como parametro
  Wire.begin(2);
  
  Wire.onReceive(receiveEvent);
}

void loop(){
  //codigo aqui
}

void receiveEvent(int howMany) {
  if(Wire.available()){
    recebido = Wire.read();
    Serial.print(recebido);
  }
}