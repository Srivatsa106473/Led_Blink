//Multi LED Blink
 int led1Pin = 4;
 int led2Pin = 5;
 int led3Pin = 6;
 int led4Pin = 7;
 void setup() {   
//initialize the led pins as an outputs
 pinMode(led1Pin, OUTPUT);
 pinMode(led2Pin, OUTPUT);
 pinMode(led3Pin, OUTPUT) ;
 pinMode(led4Pin, OUTPUT);
 }
 void loop() {
 for (int ledPin=4;ledPin<8;ledPin++){//for pins 4-7
 digitalWrite(ledPin, HIGH);//turn LED on
 delay(1000);// wait for 1000 milliseconds (one second)
 digitalWrite(ledPin, LOW);//turn LED off
 delay(1000);//wait one second
 }
 }
