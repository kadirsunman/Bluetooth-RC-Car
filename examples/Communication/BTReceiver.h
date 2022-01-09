#ifndef BTReceiver_h
#define BTReceiver_h

#include "Arduino.h"
#include <SoftwareSerial.h>
class SoftwareSerial;
class BTReceiver
{
  private:
    bool _horn;
    bool _lamp;
    bool _gearBox;
    bool _handBrake;
    int _angle;
    String _receiveData;
    byte _proccessData;
    int _rxPin;
    int _txPin;
    SoftwareSerial _Bluetooth;
  public:
    BTReceiver(byte rx, byte tx): _Bluetooth(rx, tx) {}
    bool getHorn(void);
    bool getLamp(void);
    bool getGearBox(void);
    bool getHandBrake(void);
    int getAngle(void);
    void begin(uint32_t baudrate);
    void start(void);
};
#endif
