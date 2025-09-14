//LED fade
 int ledPin = 9;//the Arduino pin that is connected to the LED
 void setup() {               
pinMode(ledPin, OUTPUT);// initialize the pin as an output
 }
 void loop() {
 //ramp LED up to full brightness (0 to 255)
 for (int brightness=0;brightness<256;brightness++){
 analogWrite(ledPin,brightness);
 delay(5);
 }
delay(1000);// wait one second
 //ramp LED down to no brightness (255 to 0)
 for (int brightness=255;brightness>=0;brightness--){
 analogWrite(ledPin,brightness);
 delay(5);
 }
 delay(1000);//wait one second
 }
