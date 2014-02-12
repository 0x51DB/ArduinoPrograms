//A simple program I wrote for my LilyPad. I hooked a LilyPad up with 8 LEDs
//and sowed them onto a shirt. I then used this program to control
//the LEDs in a simple pattern emulating the glider from the game of life,
//moving in place
int led[] = {6, 7, 8, 9, 10, 11, 12, 13};

void setup() {                
  for (int i = 0; i < 8; i++)
  {
    pinMode(led[i], OUTPUT);
  }
  digitalWrite(led[6], HIGH);
  digitalWrite(led[5], HIGH);
  digitalWrite(led[4], HIGH);
  digitalWrite(led[3], HIGH);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led[7], HIGH);
  digitalWrite(led[2], LOW);
  delay(1000);
  digitalWrite(led[7], LOW);
  digitalWrite(led[6], LOW);
  digitalWrite(led[2], HIGH);
  digitalWrite(led[1], HIGH);
  delay(1000);
  digitalWrite(led[5], LOW);
  digitalWrite(led[0], HIGH);
  delay(1000);
  digitalWrite(led[6], HIGH);
  digitalWrite(led[5], HIGH);
  digitalWrite(led[1], LOW);
  digitalWrite(led[0], LOW);
  delay(1000);
}
