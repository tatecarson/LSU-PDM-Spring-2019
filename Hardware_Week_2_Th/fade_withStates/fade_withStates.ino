// PWM Pin
int led = 9;
int brightness = 200;
int fadeAmount = 5;
int pot;
int button1 = 0;
int button2 = 0;
int button1State = 0;
int button2State = 0;

// States allow us to turn the button from a momentary button to a toggle button
// now we can press the button once to switch between two states

void setup()
{
  // because we're using a digital pin we have
  // to set the mode to input or output
  pinMode(led, OUTPUT);
  pinMode(2, INPUT);
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // toggle between fading and using pot
  button1 = digitalRead(2);

  if (button1)
  {
    // this only kind of works
    // see how it polls back and forth between states way too quickly to be useful
    button1State = !button1State;
  }

  // turn everything on or off
  button2 = digitalRead(4);

  if (button2)
  {
    button2State = !button2State;
  }

  //  Serial.println(button2State);

  if (button1State && button2State)
  {
    // Control fade with pot
    ///////////////////////

    // read from pot on A0
    pot = analogRead(A0);

    // constrain the pot value 0 - 255
    brightness = map(pot, 0, 1023, 0, 255);

    // set the brightness of pin 9 with pot value
    analogWrite(led, brightness);
  }
  else if (button1State == LOW && button2State)
  {
    // autofade with button press
    /////////////////////////////

    // increase brightness by fadeAmount
    brightness = brightness + fadeAmount;

    if (brightness <= 0 || brightness >= 255)
    {
      // toggle increase and decrease
      fadeAmount = -fadeAmount;
    }
    analogWrite(led, brightness);
  }
  else if (button2State == LOW)
  {
    // if neither button pressed turn LED off
    analogWrite(led, 0);
  }

  delay(30);
}
