int button = 3;
int led = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonstate = digitalRead(button);
  if(buttonstate == HIGH)
  {
  digitalWrite(led, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(led, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);
  }
  else
  {
    digitalWrite(led, LOW);
    delay(10);
  }
}
