void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello world!");
}

//this is called a global variable
int i = 0;

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(i++);
  delay(300);

  //ideas for future development
  // 1. Reset the counter when you press a button
  // 2. Print the state of your buttons and potentiometer to screen
}
