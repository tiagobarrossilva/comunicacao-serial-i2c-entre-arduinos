#include <Wire.h>

const byte botao1 = 2;
const byte botao2 = 3;
const byte botao3 = 4;
char b1 = 'a';
char b2 = 'b';
char b3 = 'c';

void setup(){
  pinMode(botao1,INPUT);
  pinMode(botao2,INPUT);
  pinMode(botao3,INPUT);
  
  //o número associado ao arduino é passado como parametro, isso é opcional para o mestre
  Wire.begin();
}

void loop(){
  if(digitalRead(botao1)){
    Wire.beginTransmission(2);
    Wire.write(b1);
    Wire.endTransmission();
    delay(100);
  }
  else{
    if(digitalRead(botao2)){
      Wire.beginTransmission(2);
      Wire.write(b2);
      Wire.endTransmission();
      delay(100);
    }
    else{
      if(digitalRead(botao3)){
        Wire.beginTransmission(2);
    	Wire.write(b3);
    	Wire.endTransmission();
    	delay(100);
      }
    }
  }
}