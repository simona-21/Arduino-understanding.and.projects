// include the library
#include <LiquidCrystal.h>

// Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// make some custom characters:
byte Heart[8] = {
0b00000, 0b01010, 0b11111, 0b11111, 0b01110, 0b00100, 0b00000, 0b00000
};

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

  lcd.createChar(0, Heart);// creeam un now caracter si alegem un numar asociat ex 0
  
  lcd.clear();//sa incepem cu un ecran gol
}

void loop() {
  // Print a message to the LCD.
  lcd.setCursor(0,0);
  lcd.print("  Hello world! ");
  delay(1000);
  lcd.setCursor(0, 1); // sa merge le a 2a linie
  lcd.print("  LCD Tutorial ");
  delay(1000);

  lcd.clear();// sa resetam ecranul

  lcd.print("Scrolling Text Demo");
  delay(1000);
  for(int i=0;i<20;i++)
  {
  lcd.scrollDisplayLeft();  // scroll everything to the left by one position
  delay(500);  
  } 

  lcd.clear();
  lcd.print("Costum characters");
  lcd.setCursor(0, 1);//unde punem caracterul
  lcd.write(byte(0)); //sa afisam caracterul
  delay(3000);

}