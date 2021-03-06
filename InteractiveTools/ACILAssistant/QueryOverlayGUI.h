// generated by Fast Light User Interface Designer (fluid) version 1.0300

#ifndef QueryOverlayGUI_h
#define QueryOverlayGUI_h
#include <FL/Fl.H>
#include <string>
using namespace std;
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Output.H>

class QueryOverlayGUI {
public:
  QueryOverlayGUI();
  Fl_Double_Window *queryOverlayWindow;
  Fl_Output *chestRegionOutput;
  Fl_Output *chestTypeOutput;
  void SetChestRegion(std::string cipRegionName);
  void SetChestType(std::string cipTypeName);
};
#endif
