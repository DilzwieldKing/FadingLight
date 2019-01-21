//The code is based upon the fade example under examples.

int ledOne = 3;
int ledTwo = 5;
int ledThree = 6;
int ledFour = 9;
int ledFive = 10;
int ledSix = 11;
int brightnessOne = 0;
int brightnessTwo = 25;
int brightnessThree = 50;
int brightnessFour = 75;
int brightnessFive = 100;
int brightnessSix = 125;
int fadeAmountOne = 5;
int fadeAmountTwo = 5;
int fadeAmountThree = 5;
int fadeAmountFour = 5;
int fadeAmountFive = 5;
int fadeAmountSix = 5;

void setup() {
  pinMode(ledOne, OUTPUT);
  pinMode(ledTwo, OUTPUT);
  pinMode(ledThree, OUTPUT);
  pinMode(ledFour, OUTPUT);
  pinMode(ledFive, OUTPUT);
  pinMode(ledSix, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  analogWrite(ledOne, brightnessOne);
  analogWrite(ledTwo, brightnessTwo);
  analogWrite(ledThree, brightnessThree);
  analogWrite(ledFour, brightnessFour);
  analogWrite(ledFive, brightnessFive);
  analogWrite(ledSix, brightnessSix);

  brightnessOne = brightnessOne + fadeAmountOne;
  brightnessTwo = brightnessTwo + fadeAmountTwo;
  brightnessThree = brightnessThree + fadeAmountThree;
  brightnessFour = brightnessFour + fadeAmountFour;
  brightnessFive = brightnessFive + fadeAmountFive;
  brightnessSix = brightnessSix + fadeAmountSix;


  if (brightnessOne <= 0 || brightnessOne >= 255) {
    fadeAmountOne = -fadeAmountOne;
  }
  if (brightnessTwo <= 0 || brightnessTwo >= 255) {
    fadeAmountTwo = -fadeAmountTwo;
  }
  if (brightnessThree <= 0 || brightnessThree >= 255) {
    fadeAmountThree = -fadeAmountThree;
  }
  if (brightnessFour <= 0 || brightnessFour >= 255) {
    fadeAmountFour = -fadeAmountFour;
  }
  if (brightnessFive <= 0 || brightnessFive >= 255) {
    fadeAmountFive = -fadeAmountFive;
  }
  if (brightnessSix <= 0 || brightnessSix >= 255) {
    fadeAmountSix = -fadeAmountSix;
  }
  delay(10);
}
