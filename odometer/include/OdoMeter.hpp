#ifndef odometer_hpp
#define odometer_hpp
class OdoMeter
{
    public:
    float GetSpeed();
    float GetDistance();
    void Pulse(long timeStamp);
    OdoMeter(float wheelDiameter);
    private:
    float wheelDiameter;
    long lastPulse;
    float distanceTravelled;
    float currentSpeed;



};
#endif