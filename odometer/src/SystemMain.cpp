#include "SystemMain.hpp"
SystemMain::SystemMain(Battery *battery,OdoMeter *odometer)
{
    this->battery = battery;
    this->odoMeter = odometer;
}
