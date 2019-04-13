void setup()​
{​
  pinMode(13, OUTPUT);      // Aseta pinni 13 lähdöksi​
  pinMode(2, INPUT_PULLUP); // Aseta pinni 2 tuloksi ja ylösveto-tilaan​
}​

​void loop() {​
  int buttonState = digitalRead(2); // Lue pinnin 2 tila kokonaisluku-​
                                    // muuttujaan buttonState.​
  if (buttonState == HIGH) {        // Jos tila ylhäällä​
    digitalWrite(13, HIGH);         // sytytä LED​
  } else {                          // muuten​
    digitalWrite(13, LOW);          // sammuta LED.​
  }​
}​
