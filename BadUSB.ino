void setup()
{

  pinMode(7, INPUT_PULLUP); // Set pin 7 as an input.
  pinMode(9, INPUT_PULLUP); // Set pin 9 as an input.

  pinMode(8, OUTPUT);   // Set  pin 8 as output.
  digitalWrite(8, LOW); // Set the output pin low.
}

int RXLED = 17;

void scriptYi() {}

void scriptEr() {}

void loop()
{
  // Check the state of the pins. To see which pin is shorted to pin 8.
  int pinStateOne = digitalRead(7);
  int pinStateTwo = digitalRead(9);

  // If pin 7 is shorted to pin 8, the scriptYi function runs.
  if (pinStateOne == LOW)
  {
    digitalWrite(RXLED, LOW); // Turn the RX LED ON
    TXLED0;                   // Turn the TX LED OFF

    scriptYi();
  }
  else if (pinStateTwo == LOW)
  {
    digitalWrite(RXLED, HIGH); // Turn the RX LED OFF
    TXLED1;                    // Turn the TX LED ON

    scriptEr();
  }
  else
  {                           // If neither pin is shorted to pin 8 it will not run any scripts. #DEBUG
    digitalWrite(RXLED, LOW); //  Turn the RX LED OFF
    TXLED1;                   // Turn the TX LED ON
  }

  delay(1000);
  .
}
