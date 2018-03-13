
const int sensor = 5; //D1
const int LED = 13; //D7

int state; // 0 close - 1 open wwitch

void setup() {
  // put your setup code here, to run once:
  pinMode(sensor, INPUT_PULLUP);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  state = digitalRead(sensor);
  
  if (state == HIGH){
    digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  }
  else{
    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1);
  }

  /*
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
*/
}
