#ifndef mainview_hpp
#define mainview_hpp
#include <LGFX_AUTODETECT.hpp>
#include "IView.hpp"
#include "Battery.hpp"
#include "OdoMeter.hpp"

class MainView:public IView
{
public:
MainView(Battery* battery,OdoMeter* odoMeter);
virtual void Refresh(LGFX *lcd);
private:
Battery* battery;
OdoMeter* odoMeter;

};
#endif