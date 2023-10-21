#include "Mainview.hpp"
MainView::MainView()
{


}
void MainView::Refresh(LGFX *lcd)
{
      lcd->setCursor(10, 20);
      lcd->print("display");
      lcd->drawLine(0,0,50,50);
}