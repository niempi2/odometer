#define LGFX_USE_V1
#define LGFX_AUTODETECT
#define LGFX_TTGO_TDISPLAY 
#include "Display.hpp"
#include "MainView.hpp"
Display::Display(LGFX *lcd)
{
    this->lcd = lcd;
    ActiveView = new MainView(new Battery(),new OdoMeter(2.4));
}
Display::~Display()
{
    delete ActiveView;
}
void Display::Refresh()
{   
    ActiveView->Refresh(lcd);
}
