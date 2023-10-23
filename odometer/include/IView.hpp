#ifndef IView_hpp
#define IView_hpp
#include <LGFX_AUTODETECT.hpp>
class IView 
{
    public:
    virtual void Refresh(LGFX *lcd);
    virtual IView* OnLeftButtonPress();
    virtual IView* OnRightButtonPress();
    
};
#endif