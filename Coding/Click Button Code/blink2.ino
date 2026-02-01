int button = 3;
int led = 9;
int lastbuttonstate;
bool key = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  lastbuttonstate = digitalRead(button);

}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonstate = digitalRead(button);
  if(lastbuttonstate != buttonstate){
    lastbuttonstate = buttonstate;
  }
  if(buttonstate == LOW) //button is released
  {
  	if(key)
    {
      digitalWrite(led, HIGH);  // turn the LED on (HIGH is the voltage level)
      delay(1000);                      // wait for a second
      digitalWrite(led, LOW);   // turn the LED off by making the voltage LOW
      delay(1000);
    }
    else
    {
      digitalWrite(led, LOW);
      
    }
  }
  else
  {
    key = !(key);
    delay(2000);
  }
}
