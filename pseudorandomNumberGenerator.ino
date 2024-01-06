// Pseudorandom number generator
// - when algorithms roll the dice
//
// by Late 6.1.2024
// Late@Linuxrauta.fi
//
void setup() {
  // use a for loop to initialize each pin as an output:
  for (int i = 1; i < 5; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }

}

void loop() {

  for (int i = 1; i < 5; i++) {
    digitalWrite(i, LOW);
  }

  // for the die roll
  int d = 300; // time 0 and 1 are shown
  int n = 10; // number of times 0 and 1 are shown
  
  int q = 5000; // time each random number is shown

  // show blink real fast

  for (int i = 0; i < n; i++) {
    // 1
    digitalWrite(1, HIGH);
    delay(d);
    digitalWrite(1, LOW);
    delay(d);
  }

  // a random delay to make the number even more random

  int x = random(100,500);

  delay(x);
  
  // Display a random number for 50 seconds

  int r = random(0,9);

    switch (r) {
      case 0:
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        break;
      case 1:
        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        break;
      case 2:
        digitalWrite(1, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        break;
      case 3:
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        break;
      case 4:
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        break;
      case 5:
        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        break;
      case 6:
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        break;
      case 7:
        digitalWrite(1, LOW);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        break;
      case 8:
        digitalWrite(1, HIGH);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        break;
      case 9:
        digitalWrite(1, HIGH);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        break;
        
  }

  delay(q);
}
