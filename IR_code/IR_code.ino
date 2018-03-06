#include "IRremote.h"

int receiver = 3; // pin 1 of IR receiver to Arduino digital pin 11

IRrecv irrecv(receiver); // create instance of 'irrecv'
decode_results results; // create instance of 'decode_results'

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();

}

void loop() {
  if (irrecv.decode( & results)){
    translateIR();
    irrecv.resume();
  }
}

void translateIR(){

  switch (results.value){
    case 0xFFA25D:
      break;
  
    case 0xFF629D:
      break;
  
    case 0xFFE21D:
      break;
  
    case 0xFF22DD:
      break;
  
    case 0xFF02FD:
      break;
  
    case 0xFFC23D:
      break;
  
    case 0xFFE01F:
      Serial.write(11);
      break;
  
    case 0xFFA857:
      Serial.write(10);
      break;
  
    case 0xFF906F:
      break;
  
    case 0xFF6897:
      Serial.write(0);
      break;
  
    case 0xFF9867:
      break;
  
    case 0xFFB04F:
      break;
  
    case 0xFF30CF:
      Serial.write(1);
      break;
  
    case 0xFF18E7:
      Serial.write(2);
      break;
  
    case 0xFF7A85:
      Serial.write(3);
      break;
  
    case 0xFF10EF:
      Serial.write(4);
      break;
  
    case 0xFF38C7:
      Serial.write(5);
      break;
  
    case 0xFF5AA5:
      Serial.write(6);
      break;
  
    case 0xFF42BD:
      Serial.write(7);
      break;
  
    case 0xFF4AB5:
      Serial.write(8);
      break;
  
    case 0xFF52AD:
      Serial.write(9);
      break;
  }

  delay(500);

}
