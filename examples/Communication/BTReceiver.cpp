#include "BTReceiver.h"
#include <SoftwareSerial.h>


void BTReceiver::begin(uint32_t baudrate)
{
  _Bluetooth.begin(baudrate);
}

void BTReceiver::start()
{
  while(_Bluetooth.available()) {
    delay(10);  
    char c = _Bluetooth.read();  //gets one byte from serial buffer
    if(c == '*')
    {
      _proccessData = _receiveData.toInt();
      _horn = bitRead(_proccessData,3);
      _lamp = bitRead(_proccessData,2);
      _gearBox = bitRead(_proccessData,1);
      _handBrake = bitRead(_proccessData,0);
      _receiveData = "";
    }
    else if (c == '&')  //breaks out of capture loop to print readstring
    {
      _angle = _receiveData.toInt();
      _receiveData = "";
      break;
    } 
    else
    {
      _receiveData += c;
    }
    
  } 
  
}
bool BTReceiver::getHorn()
{
  
  return _horn;
}
bool BTReceiver::getLamp()
{
  return _lamp;
}
bool BTReceiver::getGearBox()
{
  return _gearBox;
}
bool BTReceiver::getHandBrake()
{
  return _handBrake;
}
int BTReceiver::getAngle()
{
  return _angle;
}
