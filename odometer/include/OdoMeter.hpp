#ifndef odometer_hpp
#define odometer_hpp
class OdoMeter
{
    public:
    float GetSpeed();
    float GetDistance();
    void Pulse(unsigned long timeStamp);
    void ResetDistance();
    OdoMeter(float wheelDiameter);
    private:
    float wheelDiameter;
    unsigned long lastPulse;
    float distanceTravelled;
    float currentSpeed;
};
#endif