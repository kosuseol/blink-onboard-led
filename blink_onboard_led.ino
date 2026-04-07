void setup() {
  pinMode(13, OUTPUT); 
  //pinMode tells Arduino what a pin is supposed to do.
  //Pin 13 has an LED attached, we are telling Arduino that Pin 13 will send electricity out.
}

void loop() {
  digitalWrite(13, HIGH);
  //digitalWrite sends a signal to a pin that turns it on or off
  //HIGH means turn the pin on
  //We are telling pin 13 to turn on
  delay(500);
  //delay stops the program for a set time.
  //loop() runs very fast, without delaying, the light would seem dim from turning on and off thousands of times a second.
  digitalWrite(13, LOW);
  //sends a signal to pin 13 to turn off
  delay(500);
  //wait another 500 milliseconds
}
