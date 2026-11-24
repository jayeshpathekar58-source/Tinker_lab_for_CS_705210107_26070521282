#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd_1(32); 

void setup() {
  lcd_1.begin(16, 2);    
  lcd_1.setBacklight(1); 
}

void loop() {
  lcd_1.clear();         
  
  lcd_1.setCursor(0, 0); // Top row
  lcd_1.print("Jayesh pathekar");
  
  lcd_1.setCursor(0, 1); // Bottom row
  lcd_1.print("26070521282");
  
  delay(2000);           
  
  lcd_1.clear();        
  delay(2000);          
}
