#ifndef mainview_hpp
#define mainview_hpp
#include <LGFX_AUTODETECT.hpp>
#include "IView.hpp"

class MainView:public IView
{
public:
MainView();
virtual void Refresh(LGFX *lcd);
};
#endif