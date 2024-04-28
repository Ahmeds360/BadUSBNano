#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{

  pinMode(7, INPUT_PULLUP); // Set pin 7 as an input.
  pinMode(9, INPUT_PULLUP); // Set pin 9 as an input.

  pinMode(8, OUTPUT);   // Set  pin 8 as output.
  digitalWrite(8, LOW); // Set the output pin low.

  // Check the state of the pins. To see which pin is shorted to pin 8.
  int pinStateOne = digitalRead(7);
  int pinStateTwo = digitalRead(9);

  // If pin 7 is shorted to pin 8, the scriptYi function runs.
  if (pinStateOne == LOW)
  {
    digitalWrite(17, LOW); // Turn the RX LED ON
    TXLED0;                // Turn the TX LED OFF

    scriptYi();
  }
  else if (pinStateTwo == LOW)
  {
    digitalWrite(17, HIGH); // Turn the RX LED OFF
    TXLED1;                 // Turn the TX LED ON

    scriptEr();
  }
  else
  {                        // If neither pin is shorted to pin 8 it will not run any scripts. #DEBUG
    digitalWrite(17, LOW); //  Turn the RX LED OFF
    TXLED1;                // Turn the TX LED ON
  }
}

void scriptYi()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(2000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("https://www.youtube.com/shorts/4C-djuJX8v0");

  delay(200);

  typeKey(KEY_RETURN);

  delay(1800);

  Keyboard.print("f");

  delay(400);

  // Ending stream
  Keyboard.end();
}

void scriptEr()
{

  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(2000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");

  delay(200);

  typeKey(KEY_RETURN);

  delay(1800);

  Keyboard.print("f");

  delay(400);

  // Ending stream
  Keyboard.end();
}

void loop()
{
}
