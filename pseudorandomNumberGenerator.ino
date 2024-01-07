// Pseudorandom number generator
// - when algorithms roll the dice
//
// by Late 7.1.2024
// Late@Linuxrauta.fi
//
// 
//
void setup() {
  // Set pins 1-4 as output
  DDRD = B11110;
  
  // Let's make it truly random!
  randomSeed(analogRead(0));

}

void loop() {

  // for the die roll
  int d = 50; // time 0 and 1 are shown
  int n = 100; // number of times 0 and 1 are shown

  // 16000 is max in Arduino
  int q = 16000; // time each random number is shown

  delay(d);

  // blink real fast

  for (int i = 0; i < n; i++) {        
    int r = random(0,9);
    PORTD = r;
    delay(d);
  }

  // Display a random number for q seconds

  int r = random(0,9);

  PORTD = r;

  delay(q);
}
