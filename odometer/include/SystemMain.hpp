#ifndef systemmain_hpp
#define systemmain_hpp
#include "Battery.hpp"
#include "OdoMeter.hpp"
class SystemMain
{
    public:
        Battery *battery;
        OdoMeter *odoMeter;
        SystemMain(Battery *battery,OdoMeter* odometer);
};
#endif