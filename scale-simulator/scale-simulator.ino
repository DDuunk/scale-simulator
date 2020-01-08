void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  handleSerial();
}

void handleSerial() {
  while (Serial.available() > 0) {
    char incomingChar = Serial.read();
    switch (incomingChar) {
      case 'S':
        Serial.print("ST,G        ");
        Serial.print(pickRandomNumber());
        Serial.println("kg");
        break;
    }
  }
}

int pickRandomNumber() {
  // Return a random number between 0 and 6000
  int randomNumber = random(0, 6000);
  return randomNumber;
} 
