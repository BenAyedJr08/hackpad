#include <Keyboard.h>

const int button1 = 0; // D0
const int button2 = 1; // D1
const int button3 = 2; // D2
const int button4 = 3; // D3

void setup() {
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);

  Keyboard.begin();
}

void loop() {

  if (digitalRead(button1) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('c');
    delay(100);
    Keyboard.releaseAll();
    delay(300);
  }

  if (digitalRead(button2) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('v');
    delay(100);
    Keyboard.releaseAll();
    delay(300);
  }

  if (digitalRead(button3) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('l');
    delay(100);
    Keyboard.releaseAll();
    delay(300);
  }

  if (digitalRead(button4) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_ESC);
    delay(100);
    Keyboard.releaseAll();
    delay(300);
  }

}