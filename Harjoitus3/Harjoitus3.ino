int adcMax = 1023;    // 10bit AD-muuntimen maksimiarvo
float refVoltage = 5; // Viitejännite (oletusarvo)

void setup() {
  Serial.begin(9600); // Käynnistä sarjakommunikointi
}

void loop() {
  // Lue pinnin lukema ja muunna se jännitearvoksi.
  float inputValue = analogRead(A0);
  float voltage = inputValue / adcMax * refVoltage;

  Serial.print("Jännite: "); // Tulosta tekstiä 
  Serial.println(voltage);   // Tulosta lukema
                             // ja tee rivinvaihto
  delay(1000);
}
