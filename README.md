# Multi LED Blink (Arduino)

This sketch demonstrates how to control multiple LEDs sequentially using Arduino.  
Four LEDs are connected to pins **4, 5, 6, and 7** with current-limiting resistors.  

- Each LED pin is configured as an `OUTPUT` in `setup()`.  
- In the `loop()`, a `for` loop cycles through pins 4–7:  
  - Turns the LED **ON** for 1 second (`digitalWrite(HIGH)`)  
  - Turns the LED **OFF** for 1 second (`digitalWrite(LOW)`)  

This produces a blinking sequence where each LED toggles one by one with a 1-second delay.
