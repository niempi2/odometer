#include "StravaUploader.hpp"
#include "WifiManager.hpp"
void StravaUploader::TryUpload()
{
    WifiManager wifiManager;
    if(wifiManager.ConnectIfPresetConnectionAvailable())
    {
        

    }

}