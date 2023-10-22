#define LGFX_TTGO_TDISPLAY   
#define LGFX_AUTODETECT
#define LGFX_USE_V1


#include <Arduino.h>
#include <LovyanGFX.hpp>
#include <WiFi.h>
#include <LGFX_AUTODETECT.hpp> 
#include "display.hpp"

static LGFX lcd;     
static Display display(&lcd);
void setup(void)
{
  Serial.begin(9600);
  lcd.init();
  lcd.setRotation(0);
  lcd.setBrightness(127);
  lcd.setColorDepth(24);  
  lcd.setCursor(10, 10);  
 // lcd.print("hello world 5"); 
  display.Refresh();  
}

void loop(void)
{
}