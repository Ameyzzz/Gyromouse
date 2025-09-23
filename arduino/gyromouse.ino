#include <Arduino.h>

const int leftClickPin = 2;
const int rightClickPin = 3;
const int scrollUpPin = 4;
const int scrollDownPin = 5;

void setup() {
  Serial.begin(9600);

  pinMode(leftClickPin, INPUT_PULLUP);
  pinMode(rightClickPin, INPUT_PULLUP);
  pinMode(scrollUpPin, INPUT_PULLUP);
  pinMode(scrollDownPin, INPUT_PULLUP);
}

void loop() {
  int xVal = analogRead(A0);  // X from ADXL335
  int yVal = analogRead(A1);  // Y from ADXL335

  // Normalize values a bit
  int xMapped = map(xVal, 300, 700, -10, 10);
  int yMapped = map(yVal, 300, 700, -10, 10);

  // Button states (LOW = pressed)
  int left = digitalRead(leftClickPin) == LOW ? 1 : 0;
  int right = digitalRead(rightClickPin) == LOW ? 1 : 0;
  int up = digitalRead(scrollUpPin) == LOW ? 1 : 0;
  int down = digitalRead(scrollDownPin) == LOW ? 1 : 0;

  // Format: X,Y,L,R,U,D
  Serial.print(xMapped);
  Serial.print(",");
  Serial.print(yMapped);
  Serial.print(",");
  Serial.print(left);
  Serial.print(",");
  Serial.print(right);
  Serial.print(",");
  Serial.print(up);
  Serial.print(",");
  Serial.println(down);

  delay(20);  // smoothness
}
