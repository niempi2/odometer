#include <WiFi.h>
#ifndef WifiManager_hpp
#define WifiManager_hpp
class WifiManager
{    
    public:
    bool ConnectIfPresetConnectionAvailable();
    private:
    const char* presetSSids[2][2] = {{"ssid1","password"},{"ssid2","password"}};
};
#endif