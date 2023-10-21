#ifndef display_hpp
#define display_hpp

#include "IView.hpp"
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
    Display(LGFX *lcd);
    ~Display();
};
#endif
