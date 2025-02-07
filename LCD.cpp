// Include the LiquidCrystal library for LCD control
#include <LiquidCrystal.h> 

// Define the pin connections for the LCD
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; 

// Create an LCD object with the defined pins
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); 

void setup() { 
    // Initialize the LCD with 16 columns and 2 rows
    lcd.begin(16, 2); 

    // Print the first line of text on the LCD
    lcd.print("Antor, Janie"); 

    // Move the cursor to the second row, first column
    lcd.setCursor(0, 1); 

    // Print the second line of text on the LCD
    lcd.print("Israt, Srabonti"); 
} 

void loop() { 
    // The loop is empty because the text is static and does not need to update continuously
}
