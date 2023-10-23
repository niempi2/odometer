#ifndef display_hpp
#define display_hpp

#include "IView.hpp"
#include "Battery.hpp"
#include "OdoMeter.hpp"
#include <LGFX_AUTODETECT.hpp>


class Display
{
    float Voltage;
    float Speed;
    float Distance;
    IView* ActiveView;
    LGFX *lcd;
    public:
    void Refresh();
    void OnLeftButtonPress();
    void OnRightButtonPress();
    Display(LGFX *lcd,Battery* battery,OdoMeter* odometer);
    ~Display();
};
#endif
