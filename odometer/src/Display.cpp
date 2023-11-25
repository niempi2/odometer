#define LGFX_USE_V1
#define LGFX_AUTODETECT
#define LGFX_TTGO_TDISPLAY 
#include "Display.hpp"
#include "MainView.hpp"
Display::Display(LGFX *lcd,SystemMain *system)
{
    this->lcd = lcd;
    ActiveView = new MainView(system);
}
Display::~Display()
{
    delete ActiveView;
}
void Display::Refresh()
{   
    ActiveView->Refresh(lcd);
}
void Display::OnLeftButtonPress()
{
    ActiveView=ActiveView->OnLeftButtonPress();

}
void Display::OnRightButtonPress()
{
    

}