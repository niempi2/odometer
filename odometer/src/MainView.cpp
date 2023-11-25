#include "Mainview.hpp"
#include "SystemMain.hpp"
MainView::MainView(SystemMain *system)
{
     this->system= system;

}
void MainView::Refresh(LGFX *lcd)
{
      lcd->setCursor(10, 20);
      lcd->print(system->battery->GetVoltage());
      lcd->setCursor(10, 50);
      lcd->print(system->battery->GetPrecentage());
      lcd->setCursor(10, 80);
      lcd->print(system->odoMeter->GetDistance());
      lcd->setCursor(10, 110);
      lcd->print(system->odoMeter->GetSpeed());         
}

IView* MainView::OnLeftButtonPress()
{
      system->odoMeter->ResetDistance();
      return this;
}
IView* MainView::OnRightButtonPress()
{
      return this;
}
 
