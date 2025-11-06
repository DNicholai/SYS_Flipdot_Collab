#include <Shifty.h>
#include <Streaming.h>  // Library for changing the syntax for Serial outs to make it more ergonomic (Serial << "output" << endl; )


// Declare the shift register
Shifty shift; 


void setup() {
  // Set the number of bits you have (multiples of 8)
  shift.setBitCount(8);

  // Set the clock, data, and latch pins you are using
  // This also sets the pinMode for these pins
  shift.setPins(19, 20, 18); 
  Serial.begin(115200);
  Serial << "Serial started in setup loop -- " << endl ;
}
  


void loop() {
  // writeBit works just like digitalWrite
  shift.writeBit(1, HIGH);
  Serial << "1 high" << endl; 
  delay(1500);
  shift.writeBit(3, HIGH);
  Serial << "3 high" << endl;
  delay(1500);
  shift.writeBit(1, LOW);
  Serial << "1 low" << endl; 
  delay(1500);
  shift.writeBit(3, LOW);
  Serial << "3 low" << endl; 
  
  delay(1500);

    
  shift.writeBit(5, HIGH);
  delay(1500);
  shift.writeBit(0, HIGH);
  delay(1500);
  shift.writeBit(0, LOW);
  shift.writeBit(1, LOW);
  
  shift.writeBit(2, LOW);
  shift.writeBit(3, LOW);
    
  shift.writeBit(4, LOW);
    
  shift.writeBit(5, LOW);
  delay(1500);
  
 
 
}
