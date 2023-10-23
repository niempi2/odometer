#include "Mainview.hpp"
#include "Battery.hpp"
#include "OdoMeter.hpp"
MainView::MainView(Battery* battery,OdoMeter* odoMeter)
{
     this->battery=battery;
     this->odoMeter=odoMeter; 

}
void MainView::Refresh(LGFX *lcd)
{
      lcd->setCursor(10, 20);
      lcd->print(battery->GetVoltage());
      lcd->setCursor(10, 50);
      lcd->print(battery->GetPrecentage());
      lcd->setCursor(10, 80);
      lcd->print(odoMeter->GetDistance());
      lcd->setCursor(10, 110);
      lcd->print(odoMeter->GetSpeed());         
}

IView* MainView::OnLeftButtonPress()
{
      odoMeter->ResetDistance();
      return this;
}
IView* MainView::OnRightButtonPress()
{
      return this;
}
 
