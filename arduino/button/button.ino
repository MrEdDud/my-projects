// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2; // the number of the pushbutton pin
const int ledPin = 13; // the number of the LED pin
int count = 0;
// variables will change:
int buttonState = 0; // variable for reading the pushbutton status
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}
void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
   if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    // print out the state of the button:
    Serial.println(buttonState);
    count ++;
    delay(200);
  } if (count % 2 == 0){
    // turn LED on:
    digitalWrite(ledPin, LOW);
    // print out the state of the button:
    Serial.println(buttonState);
    delay(200);
  }
}