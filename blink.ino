/* 
  Blink

  Turns green LED on for five seconds, then turn off, turn yellow led on for one and a half seconds, then turn off,
  turn red LED on for eigth seconds then turn off, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board

  int amarelo = 7;
  int verde = 8;
  int vermelho = 13;

  void setup () {
    pinMode(amarelo, OUTPUT);
    pinMode(verde, OUTPUT);
    pinMode(vermelho, OUTPUT);
    Serial.begin(9600);
  }
  void loop() {
    digitalWrite(verde, HIGH);
    delay(5000);
    digitalWrite(verde, LOW);
    digitalWrite(amarelo, HIGH);
    delay(1500);
    digitalWrite(amarelo, LOW);
    digitalWrite(vermelho,HIGH);
    delay(8000);
    digitalWrite(vermelho, LOW);
  }
