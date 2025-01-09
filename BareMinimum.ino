void setup() {
  // put your setup code here, to run once:

  // set pins 9-13 as output signals
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // go through pins 9-13
  for (int i = 9; i < 14; i++) {
    // turn pin on
    digitalWrite(i, HIGH);

    // wait for 0.125 seconds
    delay(125);

    // turn pin off
    digitalWrite(i, LOW);
  }

  // go through pins 12-10
  for (int i = 12; i > 9; i--) {
    // turn pin on
    digitalWrite(i, HIGH);

    // wait for 0.125 seconds
    delay(125);

    // turn pin off
    digitalWrite(i, LOW);
  }

  
}
