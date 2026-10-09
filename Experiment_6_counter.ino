
#include <LiquidCrystal.h>

// LCD connections: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup()
{
    lcd.begin(16, 2);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("HELLO WORLD");

    lcd.setCursor(0, 1);
    lcd.print("EXP 6 - LCD");
}

void loop()
{
    // Display remains unchanged
}
