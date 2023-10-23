#define LGFX_TTGO_TDISPLAY   
#define LGFX_AUTODETECT
#define LGFX_USE_V1
#define LEFTBUTTON 0
#define RIGHTBUTTON 35

#include <Arduino.h>
#include <LovyanGFX.hpp>
#include <WiFi.h>
#include <LGFX_AUTODETECT.hpp> 
#include "display.hpp"
#include "OdoMeter.hpp"
#include "Battery.hpp"

static LGFX lcd;     

static OdoMeter odoMeter(2.4);
static Battery battery;
static Display display(&lcd,&battery,&odoMeter);
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
  odoMeter.Pulse(millis());
  display.Refresh(); 
  delay(random()%800+100); 
}
}