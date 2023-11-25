#include "WifiManager.hpp"

bool WifiManager::ConnectIfPresetConnectionAvailable()
{
    int numberOfNetworks = WiFi.scanNetworks();
    for(int i =0;i< numberOfNetworks;i++)
    {
       
        for(int j = 0 ;j<2;j++)
        {
            if(String(presetSSids[j][0])==WiFi.SSID(i))
            {
               if(WL_CONNECTED==WiFi.begin(presetSSids[j][0],presetSSids[j][1]))
               {
                    return true; 
               }
            }
        }   
    }
    return false;
}