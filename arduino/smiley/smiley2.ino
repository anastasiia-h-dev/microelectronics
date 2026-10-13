#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);
const int buttonPin = 2;
int buttonState = 0;
int countClicks = 0;

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  buttonState = digitalRead(buttonPin);
  if (buttonState == 1) {
    if(countClicks == 4){
      lcd.clear();
      image00();
      lcd.setCursor(10, 0);
      lcd.print("HELLO");
      lcd.setCursor(10, 1);
      lcd.print("WORLD");
      
      countClicks = 0;
      delay(300);
    }
    
    else if(countClicks%2 == 0){
    lcd.clear();
    image02();
    countClicks++;
    delay(300);
    }
    else{

        lcd.clear();
        image01();
        countClicks ++;
        delay(300);
        }
  }
}


void image00()
{
     //lcd.clear();

    byte image01[8] = {B00000, B00000, B11111, B00000, B00000,   B10001, B10001, B00000};
    byte image02[8] = {B00000, B00000, B00000, B00001, B00010,   B00100, B00100, B01000};
    byte image03[8] = {B00000, B00000, B00000, B10000, B01000,   B00100, B00100, B00010};
    byte image04[8] = {B00000, B10001, B01110, B00000, B00000, B11111, B00000, B00000};
    byte image05[8] = {B01000, B00100, B00100, B00010, B00001, B00000, B00000, B00000};
    byte image06[8] = {B00010,   B00100, B00100, B01000, B10000, B00000, B00000, B00000};


    lcd.createChar(0,   image01);
    lcd.createChar(1, image02);
    lcd.createChar(2, image03);
    lcd.createChar(3, image04);
    lcd.createChar(4, image05);
    lcd.createChar(5, image06);


    lcd.setCursor(7,   0);
    lcd.write(byte(0));
    lcd.setCursor(6,   0);
    lcd.write(byte(1));
    lcd.setCursor(8,   0);
    lcd.write(byte(2));
    lcd.setCursor(7,   1);
    lcd.write(byte(3));   
    lcd.setCursor(6,   1);
    lcd.write(byte(4));
    lcd.setCursor(8,   1);
    lcd.write(byte(5));
}

void image01()
{
    byte image01[8] = {B00000, B00000, B11111, B00000, B00000,   B10001, B10001, B00000};
    byte image02[8] = {B00000, B00000, B00000, B00001, B00010,   B00100, B00100, B01000};
    byte image03[8] = {B00000, B00000, B00000, B10000, B01000,   B00100, B00100, B00010};
    byte image05[8] = {B01000, B00100, B00100, B00010, B00001, B00000, B00000, B00000};
    byte image06[8] = {B00010,   B00100, B00100, B01000, B10000, B00000, B00000, B00000};
    byte image04[8] = {B00000, B00000, B11111, B00000, B00000, B11111, B00000, B00000};

    lcd.createChar(3, image04);
    lcd.createChar(0,   image01);
    lcd.createChar(1, image02);
    lcd.createChar(2, image03);
    lcd.createChar(4, image05);
    lcd.createChar(5, image06);

        lcd.setCursor(7,   0);
    lcd.write(byte(0));
    lcd.setCursor(6,   0);
    lcd.write(byte(1));
    lcd.setCursor(8,   0);
    lcd.write(byte(2));
    lcd.setCursor(7,   1);
    lcd.write(byte(3));   
    lcd.setCursor(6,   1);
    lcd.write(byte(4));
    lcd.setCursor(8,   1);
    lcd.write(byte(5));
}

void image02()
{

    
    byte image01[8] = {B00000, B00000, B11111, B00000, B00000,   B10001, B10001, B00000};
    byte image02[8] = {B00000, B00000, B00000, B00001, B00010,   B00100, B00100, B01000};
    byte image03[8] = {B00000, B00000, B00000, B10000, B01000,   B00100, B00100, B00010};
    byte image04[8] = {B00000, B01110, B10001, B00000, B00000, B11111, B00000, B00000};
    byte image05[8] = {B01000, B00100, B00100, B00010, B00001, B00000, B00000, B00000};
    byte image06[8] = {B00010,   B00100, B00100, B01000, B10000, B00000, B00000, B00000};


    lcd.createChar(0,   image01);
    lcd.createChar(1, image02);
    lcd.createChar(2, image03);
    lcd.createChar(3, image04);
    lcd.createChar(4, image05);
    lcd.createChar(5, image06);


    lcd.setCursor(7,   0);
    lcd.write(byte(0));
    lcd.setCursor(6,   0);
    lcd.write(byte(1));
    lcd.setCursor(8,   0);
    lcd.write(byte(2));
    lcd.setCursor(7,   1);
    lcd.write(byte(3));   
    lcd.setCursor(6,   1);
    lcd.write(byte(4));
    lcd.setCursor(8,   1);
    lcd.write(byte(5));

    

}