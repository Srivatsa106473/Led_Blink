//Multi LED Blink
int led1Pin = 4;
int led2Pin = 5;
int led3Pin = 6;
int led4Pin = 7;
void setup() {
  //initialize the led pins as an outputs
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
  pinMode(led4Pin, OUTPUT);
}
void loop() {
  digitalWrite(led1Pin, HIGH);//turn LED on
  delay(1000);// wait for 1000 milliseconds (one second)
  digitalWrite(led1Pin, LOW);//turn LED off
  delay(1000);//wait one second
  //do the same for the other 3 LEDs
  digitalWrite(led2Pin, HIGH);//turn LED on
  delay(1000);// wait for 1000 milliseconds (one second)
  digitalWrite(led2Pin, LOW);//turn LED off
  delay(1000);//wait one second
  digitalWrite(led3Pin, HIGH);//turn LED on
  delay(1000);// wait for 1000 milliseconds (one second)
  digitalWrite(led3Pin, LOW);//turn LED off
  delay(1000);//wait one second
  digitalWrite(led4Pin, HIGH);//turn LED on
  delay(1000);// wait for 1000 milliseconds (one second)
  digitalWrite(led4Pin, LOW);//turn LED off
  delay(1000);//wait one second
}
