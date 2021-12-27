/*
  Android bluetooth communication with arduino

  Data is received via bluetooth connected to pins 10 and 11.

  * Bluetooth Receiver (Rx) pin 10 or another digital pins
  * Bluetooth Transmitter (Tx) pin 11 or another digital pins
*/

#include "BTReceiver.h"
BTReceiver BT(10,11);  //BT(Rx,Tx); 


void setup() {
  Serial.begin(9600);
  //We start the configuration settings, enter our baudrate 9600, 19200, 38400 etc.
  BT.begin(9600); 
}

void loop() {
  //We begin the communication with the android application and pull the data
  BT.start();
  
  //We call the function "getHorn" for horn information
  Serial.print(BT.getHorn());
  Serial.print(" - ");
  
  //We call the function "getLamp" for lamp information
  Serial.print(BT.getLamp());
  Serial.print(" - ");
  
  //We call the function "getGearBox" for gear box information
  Serial.print(BT.getGearBox());
  Serial.print(" - ");
  
  //We call the function "getHandBrake" for handbrake information
  Serial.print(BT.getHandBrake());
  Serial.print(" - ");
  
  //We call the function "getAngle" for joystick information
  Serial.println(BT.getAngle());
}
