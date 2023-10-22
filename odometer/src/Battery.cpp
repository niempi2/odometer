#include "Battery.hpp"
float Battery::GetVoltage()
{
    return 3.95;
}
float Battery::GetPrecentage()
{
    return (this->GetVoltage()-this->minimumVoltage)/(this->maximumVoltage-this->minimumVoltage);

}
Battery::Battery(/* args */)
{

}

Battery::~Battery()
{}