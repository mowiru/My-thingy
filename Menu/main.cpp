#include <iostream>
#include <string.h>

#include "my_function.h"

using namespace std;

int main(){

  const char* MainMenuOptions[3] = {
    "View Data",
    "Enter Data",
    "Quit"
  };

  const char* ViewDataOptions[6] = {
    "Firstname",
    "Lastname",
    "Age",
    "City",
    "All",
    "Back"
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

    int selection = showMenu(MainMenuOptions, "Mainmenu", 3);

    switch (selection) {
      case 0: // View Data
          viewSelection = showMenu(ViewDataOptions, "View Data Menu", 6);
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
          run = false;
          cout << "bye bye" << endl;
        break;
    }
  }
  return 0;
}
