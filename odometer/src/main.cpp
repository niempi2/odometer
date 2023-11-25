#define LGFX_TTGO_TDISPLAY   
#define LGFX_AUTODETECT
#define LGFX_USE_V1
#define LEFTBUTTON 0
#define RIGHTBUTTON 35
#define DEBUG TRUE



#include <Arduino.h>
#include <LovyanGFX.hpp>
#include <WiFi.h>
#include <LGFX_AUTODETECT.hpp> 
#include "Display.hpp"
#include "OdoMeter.hpp"
#include "Battery.hpp"
#include "SystemMain.hpp"
static LGFX lcd;     

static OdoMeter odoMeter(2.4);
static Battery battery;
static SystemMain system1(&battery,&odoMeter);
static Display display(&lcd,&system1);
bool leftButton=false;
bool righButton=false;
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
  pinMode(LEFTBUTTON, INPUT);
  pinMode(RIGHTBUTTON, INPUT);  
}

void loop(void)
{
while (true)
{
  if(digitalRead(LEFTBUTTON))
  {
   
    if(!leftButton){
      display.OnLeftButtonPress();
    }
    leftButton=true;
  }
  else
  {
    leftButton = false;
  }
 
  display.Refresh(); 
  delay(1);
  if(random(500)==0)odoMeter.Pulse(millis());
}
}