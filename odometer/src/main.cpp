#define LGFX_TTGO_TDISPLAY   
#define LGFX_AUTODETECT
#define LGFX_USE_V1


#include <Arduino.h>
#include <LovyanGFX.hpp>
#include <WiFi.h>
#include <LGFX_AUTODETECT.hpp> 


static LGFX lcd;     

void setup(void)
{
  lcd.init();
  lcd.setRotation(0);
  lcd.setBrightness(127);
  lcd.setColorDepth(24);  
  lcd.setCursor(10, 10);  
  lcd.print("hello world1");   
}

void loop(void)
{
}