#include "view_gui.h"
#include "patron.h"
#include "publication.h"
#include "library.h"
#include "dialogs.h"

#include <gtkmm.h>

using namespace std;

int main(int argc, char* argv[]) {
  Library library;
  View_gui view(library);

  bool passed = true;

  view_gui.show_menu();
}
