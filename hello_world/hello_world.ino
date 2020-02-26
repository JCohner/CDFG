#define INPUT_PIN 1
#define OUTPUT_PIN 2

// put your setup code here, to run once:
void setup() {
  //this is the command to tell the arduino whether a pin will be an input or an output
  //syntax: pinMode(pin number, OUTPUT or INPUT);
  pinMode(OUTPUT_PIN,OUTPUT);
  pinMode(INPUT_PIN,INPUT);

  //if you're going to be initiating serial you might do that here!
}

// put your main code here, to run repeatedly:
void loop() {
  //digtialRead(pin) takes a pin you want to read and returns a value of 0 or 1 reflecting whether that
  //pin read a HIGH or LOW voltage
  int pinState = digitalRead(INPUT_PIN);
  //we are checking if the input pin is high 
  //if it is right a HIGH voltage on the output pin to light up the LED
  if (pinState == HIGH)
  {
    digitalWrite(OUTPUT_PIN, HIGH);
  }
  //if the input pin does not see a high voltage write the LED low to turn it off
  else
  {
    digitalWrite(OUTPUT_PIN, LOW);
  }

  
}
