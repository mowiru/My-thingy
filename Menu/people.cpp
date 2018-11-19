#include <iostream>
#include <string.h>

#include "myFunction.h"

using namespace std;

int people_selection(bool& parentRun){

  const char* MainMenuOptions[4] = {
    "View Person",
    "Enter Person",
    "Back",
    "Quit"
  };

  const char* ViewDataOptions[7] = {
    "Firstname",
    "Lastname",
    "Age",
    "City",
    "All",
    "Back",
    "Quit"
  };

  bool run = true;
  //char strl;
  char* fn; //firstname
  char* ln; //lastname
  int a; //ages
  char* c; //city
  int counter = 0;
  int viewSelection;

  while(run){
    //char* response;

    int selection = showMenu(MainMenuOptions, "People_Menu", 4);

    switch (selection) {
      case 0: // View Data
          viewSelection = showMenu(ViewDataOptions, "View Data Menu", 7);
          switch (viewSelection) {
            case 0:
              dataOutput("You have choosen the categorie Firstname.", counter, fn);
              break;
            case 1:
              dataOutput("You have choosen the categorie Lastname.", counter, ln);
              break;
            case 2:
              dataOutput("You have choosen the categorie Age.", counter, to_string(a).c_str());
              break;
            case 3:
              dataOutput("You have choosen the categorie City.", counter, c);
              break;
            case 4:
              cout << "You have choosen the categorie All Data." << endl;
              cout << '\n' << endl;
              cout << counter << ". " << fn << " " << ln << ", " << a << ", " << c << ";" << endl;
              break;
            case 5:
              cout << "You went back." << endl;
              break;
            case 6:
              cout << "PROGRAM TERMINATED" << endl;
              run = false;
              parentRun = false;
              break;
          }
        break;

      case 1: // Enter Data
        cout << "Input Firstname, Lastname, Age and City:  ";
        fn = ui::readLine("fn: ");
        ln = ui::readLine("ln: ");
        a = ui::numberInput("a: ");
        c = ui::readLine("c: ");
        counter++;
        cout << '\n';
        cout << counter << ". " << fn << " " << ln << " is " << a << " year's old. " << endl;
        cout << fn << " " << ln << " lives in " << c << "." << endl;
        cout << '\n';
        break;

      case 2: // Quit
          cout << '\n';
          cout << "You have gone back to the top menu a.k.a. start." << endl;
          cout << '\n';
        break;

      case 3:
          cout << '\n';
          cout << "PROGRAM TERMINATED" << endl;
          cout << '\n';
          run = false;
          parentRun = false;
    }
  }
  return 0;
}
