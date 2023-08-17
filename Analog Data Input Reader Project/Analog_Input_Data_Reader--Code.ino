//potentiometer is connected to pin 4
const int potPin = 2;

//variable for storing the potentiometer value
int potValue = 0;


//this function sets up our potentiometer
void setup() {
  //9600 bauds is the default value because it is fast enough
  Serial.begin(9600);
  //we have this delay before the value starts to be printed (in loop below) because it takes some time to setup the potentiometer
  delay(1000);
}

//this loop is what runs to read and print our potentiometer value - it is void because we do not input any parameters and none are returned
void loop() {
  //this reads the potentiometer value
  potValue = analogRead(potPin);
  //this prints the potentiometer value (0-4095)
  Serial.println(potValue);
  //this has a delay because we do not want the value printing every milisecond. Instead it only prints each half-second
  delay(500);
}
