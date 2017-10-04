#include "view.h"
#include "dialogs.h"
#include <string>
#include <iostream>

using namespace std;

void View::show_menu() {
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

void View::list_publications() {

}


void View::list_patrons() {
  
}

void View::help() {
  
}


