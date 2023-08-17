const int PIN_RED   = 2; //The Red LED is connected to pin 2
const int PIN_GREEN = 4; //The Green LED is connected to pin 4
const int PIN_BLUE  = 5; //The Blue LED is connected to pin 5
  
//the variables which hold our color intensities - essentially used to choose what colour is displayed by the LED
int red;
int green;
int blue;
  
/* This function "Set Color" will set the color of the LED
   rather than doing it over and over in the loop. */
void setColor(int R, int G, int B) {
  analogWrite(PIN_RED,   R);
  analogWrite(PIN_GREEN, G);
  analogWrite(PIN_BLUE,  B);
}
  
void setup() {
  //this sets all three pins to output mode 
  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
  
}


//this function will set the and loop through all the colours of the rainbow
void loop() {
  setColor(148, 0, 211); //set LED to Purple
  delay(500); //Delay (and delays below) will pause for half a second so that the colour can actually be displayed
  setColor(	75, 0, 130); //set LED to indigo
  delay(500);
  setColor(0, 0, 255); //set LED to Blue
  delay(500);
  setColor(0, 255, 0); //set LED to Green
  delay(500);
  setColor(255, 255, 0); //set LED to Yellow
  delay(500);
  setColor(255, 127, 0); //set LED to Orange
  delay(500);
  setColor(255, 0 , 0); //set LED to Red
  delay(500);
}
