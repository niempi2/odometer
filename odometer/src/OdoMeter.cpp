    #include "OdoMeter.hpp"
    float OdoMeter::GetSpeed(){
        return currentSpeed;
    }
    float OdoMeter::GetDistance()
    {
        return this->distanceTravelled/(float)1000;
    }
    void OdoMeter::Pulse(long timeStamp)
    {
        if(this->lastPulse>0 && timeStamp > lastPulse)
        {
            this->distanceTravelled +=  this->wheelDiameter;
            long timePassed= timeStamp-this->lastPulse;
            this->currentSpeed = this->wheelDiameter/(float)timePassed*3600;
        }
        this->lastPulse = timeStamp;
    }

     OdoMeter::OdoMeter(float wheelDiameter)
     {
        this->wheelDiameter= wheelDiameter;
        this->distanceTravelled=0;
        this->lastPulse=0;
        this->currentSpeed=0;

     }


