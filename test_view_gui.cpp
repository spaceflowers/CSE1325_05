#include "view.h"
#include "patron.h"
#include "publication.h"
#include "library.h"
#include "dialogs.h"

#include <gtkmm.h>

using namespace std;

int main(int argc, char* argv[]) {
  Library library;
  View view(library);

  bool passed = true;

  view.show_menu();
}
