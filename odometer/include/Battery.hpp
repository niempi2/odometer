#ifndef battery_hpp
#define battery_hpp
class Battery
{
private:
    float voltage;
    const float minimumVoltage=3.0;
    const float maximumVoltage=4.2;
public:
    float GetVoltage();
    float GetPrecentage();

    Battery(/* args */);
    ~Battery();
};
#endif