// Motor A connections
int enA = PB9;
int in1 = PB8;
int in2 = PB7;


void setup() {
  // Set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);


  // Turn off motors - Initial state
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}

void loop() {
  OpenBallValve();
  delay(150000);
  CloseBallValve();
  delay(15000000);
}

void OpenBallValve() {
  // Set motors to maximum speed
  // For PWM maximum possible values are 0 to 255
  analogWrite(enA, 255);

  // Open ball valve
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}

void CloseBallValve() {
  // Set motors to maximum speed
  // For PWM maximum possible values are 0 to 255
  analogWrite(enA, 255);

  // Close ball valve
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
}

void TurnOffBallValve() {
  // Turn off ball valve
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}