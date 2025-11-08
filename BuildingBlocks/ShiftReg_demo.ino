/*
  ShiftRegister74HC595 - Library for simplified control of 74HC595 shift registers.
  Developed and maintained by Timo Denk and contributers, since Nov 2014.
  Additional information is available at https://timodenk.com/blog/shift-register-arduino-library/
  Released into the public domain.
*/

#include <ShiftRegister74HC595.h>
#include <Streaming.h>  // Library for changing the syntax for Serial outs to make it more ergonomic (Serial << "text" << endl; )


// ST_CP pin 
const int latchPin = 18;
// SH_CP pin 
const int clockPin = 20;
// DS pin 
const int dataPin = 19;

// create a global shift register object
// parameters: <number of shift registers> (data pin, clock pin, latch pin)
ShiftRegister74HC595<1> sr(dataPin, clockPin, latchPin);  // Crucial ) the values cannot be set numerically in this line, but must be send as variables
 



void setup() { 
  Serial.begin(115200);
  Serial << "Serial started in setup loop -- " << endl ;
}

void loop() {

  // setting all pins at the same time to either HIGH or LOW
  sr.setAllHigh(); // set all pins HIGH
  Serial << "Set all LEDs high" << endl; 
  delay(2000);
  
  sr.setAllLow(); // set all pins LOW
  Serial << "Set all LEDs low" << endl; 
  delay(2000); 
  

  // setting single pins0
  Serial << "Interate through the pins" << endl; 
  for (int i = 0; i < 8; i++) {
    sr.setAllLow(); // set all pins LOW
    sr.set(i, HIGH); // set single pin HIGH
    delay(100); 
  }
    // setting single pins0
  Serial << "Interate through the pins QUICKLY" << endl; 
  for (int i = 0; i < 8; i++) {
    sr.setAllLow(); // set all pins LOW
    sr.set(i, HIGH); // set single pin HIGH
    delay(20); 
  }
  
  // set all pins at once
  Serial << "Set the pin values to B10111111" << endl; 
  uint8_t pinValues[] = { B10111111 }; 
  sr.setAll(pinValues);
  delay(4000);

  
  // read pin (zero based, i.e. 6th pin)
  uint8_t stateOfPin5 = sr.get(5);
  sr.set(6, stateOfPin5);
  delay(1000);


  // set pins without immediate update
  sr.setNoUpdate(0, HIGH);
  sr.setNoUpdate(1, LOW);
  // at this point of time, pin 0 and 1 did not change yet
  sr.updateRegisters(); // update the pins to the set values

}
