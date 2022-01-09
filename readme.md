## The Car Which Is Controlled With Bluetooth Via Android Application

![](https://github.com/kadirsunman/Bluetooth-RC-Car/blob/master/images/application.jpg)
[RC Car Application on Google Play Store](https://play.google.com/store/search?q=mechastudios&gl=TR)

This project is a library for the Arduino platform. It provides the car
to be controlled with bluetooth connection via android application easily.

#### Command to identify the bluetooth module connected to Arduino:
```
BTReceiver BTR(Rx,Tx); // Rx, Tx -> they are connected digital pins.
```

#### Command to determine the communication speed:
```
BTR.begin(baudrate); // baudrate -> 9600, 19200, 38400 ... etc.
```

#### Command to initiate communication:
```
BTR.start();
```

#### Command to horn data: 
``` 
BTR.getHorn(); // returns a "Bool" variable
```


#### Command to lamp data:
```
BTR.getLamp(); // returns a "Bool" variable
```

#### Command to gearbox data:
```
BTR.getGearBox(); // returns a "Bool" variable
```

#### Command to handbrake data:
```
BTR.getHandBrake(); // returns a "Bool" variable
```

#### Command to joystick data:
```
BTR.getAngle(); // returns a "Integer" variable.
```

## Android Uygulama Üzerinden Bluetooth İle Kontrol Edilen Araba

[Google Play Store üzerinde RC Car Uygulaması](https://play.google.com/store/search?q=mechastudios&gl=TR)

Bu proje Arduino platformu üzerinde olan bir kütüphanedir. 
Bu kütüphane bluetooth bağlantısı kullanarak android uygulama üzerinden
kolay bir şekilde aracın kontrol edilmesini sağlar.

#### Arduino` ya bağlanan bluetooth modülünü tanımlamak için
kullanılan komut:
```
BTReceiver BTR(Rx,Tx); // Rx, Tx -> dijital pinlere bağlanır
```

#### Haberleşme hızını belirleyen komut:
```
BTR.begin(baudrate); // x -> 9600, 19200, 38400 ... vb.
```

#### Haberleşmeyi başlatan komut:
```
BTR.start();
```

#### Korna bilgisi için kullanılan komut:
```
BTR.getHorn(); // "Bool" cinsinden değişken döndürür.
```

#### Lamba bilgisi için kullanılan komut:
```
BTR.getLamp(); // "Bool" cinsinden değişken döndürür.
```

#### Vites bilgisi için kullanılan komut:
```
BTR.getGearBox(); // "Bool" cinsinden değişken döndürür.
```

#### El freni bilgisi için kullanılan komut:
```
BTR.getHandBrake(); // "Bool" cinsinden değişken döndürür.
```

#### Joystick bilgisi için kullanılan komut:
```
BTR.getAngle(); // "Integer" (Tam sayı) cinsinden değişken döndürür.
```
