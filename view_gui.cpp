#include "view_gui.h"

using namespace std;

void View_gui::show_menu() {
  string menu = R"(
=================================
CSE1325 Library Management System
=================================

Publications
------------
(1) Add publication
(2) List all publications
(3) Check out publication
(4) Check in publication

Patrons
=======
(5) Add patron
(6) List all patrons

Utility
-------
(9) Help
(0) Exit

)";

  Dialogs::input(menu, "Main Menu");
}

void View_gui::list_publications() {

}


void View_gui::list_patrons() {
  
}

void View_gui::help() {
  
}


