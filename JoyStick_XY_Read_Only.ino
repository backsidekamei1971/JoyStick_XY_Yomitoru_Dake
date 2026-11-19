#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Joystick pins
const int joyX = A0;  // Analog pin for joystick X-axis
const int joyY = A1;  // Analog pin for joystick Y-axis

int k=0;

void setup() {

  Serial.begin(9600);

  // Set up joystick input
  pinMode(joyX, INPUT);
  pinMode(joyY, INPUT);

}

void loop() {

    // Read the joystick values
  int xVal = analogRead(joyX);  // 0 to 1023
  int yVal = analogRead(joyY);  // 0 to 1023

  k=k+1;
  Serial.print(k);
  Serial.print(" x");
  Serial.print(xVal);
  Serial.print("  y");
  Serial.println(yVal);

  delay(50);
}
