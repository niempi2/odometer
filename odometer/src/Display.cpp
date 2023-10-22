#define LGFX_USE_V1
#define LGFX_AUTODETECT
#define LGFX_TTGO_TDISPLAY 
#include "Display.hpp"
#include "MainView.hpp"
Display::Display(LGFX *lcd,Battery* battery,OdoMeter* odometer)
{
    this->lcd = lcd;
    ActiveView = new MainView(battery,odometer);
}
Display::~Display()
{
    delete ActiveView;
}
void Display::Refresh()
{   
    ActiveView->Refresh(lcd);
}
