#ifndef mainview_hpp
#define mainview_hpp
#include <LGFX_AUTODETECT.hpp>
#include "IView.hpp"
#include "Battery.hpp"
#include "OdoMeter.hpp"
#include "SystemMain.hpp"
class MainView:public IView
{
public:
MainView(SystemMain *system);
virtual void Refresh(LGFX *lcd);
private:
SystemMain *system;
IView* OnLeftButtonPress();
IView* OnRightButtonPress();
};
#endif