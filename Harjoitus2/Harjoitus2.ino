#include <LiquidCrystal_I2C.h>      // Ota käyttöön LCD-näytön rajapinta

LiquidCrystal_I2C lcd(0x27, 16, 2); // Alusta LCD-rajapinta nimellä 'lcd'
                                    // (parametrit: näytön osoite, leveys, korkeus)

void setup() {
  lcd.init();            // Alusta näyttö alkutilaan
  lcd.backlight();       // Aseta näytön taustavalo
}

void loop() {
  lcd.setCursor(0, 0);   // Siirrä kursori ensimmäisen rivin alkuun
  lcd.print("Arduino");  // Tulosta teksti “Arduino"
  delay(500);            // Odota puoli sekuntia
  lcd.clear();           // Tyhjennä näyttö
  lcd.setCursor(8, 1);   // Siirrä kursori toisen rivin 9. sarakkeeseen
  lcd.print("Workshop");
  delay(500);
  lcd.clear();
}
