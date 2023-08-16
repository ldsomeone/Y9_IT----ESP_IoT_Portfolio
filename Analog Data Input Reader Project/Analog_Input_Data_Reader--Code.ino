//potentiometer is connected to pin 4
const int potPin = 2;

//variable for storing the potentiometer value
int potValue = 0;

void setup() {
  Serial.begin(9600);
  delay(1000);

}

void loop() {
  
  //this reads the potentiometer value
  potValue = analogRead(potPin);
  Serial.println(potValue);
  delay(500);
}
