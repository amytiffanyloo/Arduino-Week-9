//Credits: Template created 2005 by DojoDave <http://www.0j0.org> modified 30 Aug 2011 by Tom Igoe
//This example code is in the public domain.
//https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button


//define two LED pins, one red and one blue
const int ledPinRed = 2; //red LED
const int ledPinGreen = 3; //blue LED

//define two buttons
const int buttonRed = 4; //red Button
const int buttonGreen = 5; //blue Button

//set state of the button as off at resting state
int buttonStateRed = 0;
int buttonStateGreen = 0;

void setup() {
  //set up pins as digital inputs and outputs
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
  pinMode(buttonRed, INPUT);
  pinMode(buttonGreen, INPUT);
}

void loop() {
//  Serial.print("Red button is:");
//  Serial.println(buttonStateRed);
//  delay(100);

  //boolean to create the switch
  buttonStateRed = digitalRead(buttonRed);
  buttonStateBlue = digitalRead(buttonGreen);
  if (buttonStateRed == HIGH) {
    digitalWrite(ledPinRed, HIGH); 
  } else {
    digitalWrite(ledPinRed, LOW);
  }

  if (buttonStateBlue == HIGH) {
    digitalWrite(ledPinGreen, HIGH);
  } else {
    digitalWrite(ledPinGreen, LOW);
  }
}