#include <iostream>
#include <string.h>
#include <math.h>

#include "my_function.h"

#include "auto.cpp"
#include "people.cpp"
#include "calc.cpp"

using namespace std;

int main(){

  bool run = true;


  //Mainmenu Option List and Count how many
  const char* MainMenuOptions[4] = {
    "People.",
    "Cars.",
    "Calculator",
    "Quit"
  };

  while(run){
    switch(showMenu( MainMenuOptions,"TopMenu", 4)){
      case 0:
        cout << "You have choosen People." << endl;
        cout << '\n';
        people_selection(run);
        cout << '\n';
        break;

      case 1:
        cout << "You have choosen Cars." << endl;
        cout << '\n';
        car_selection(run);
        cout << '\n';
        break;

      case 2:
        cout << '\n';
        cout << "You have choosen Calculator." << endl;
        cout << '\n';
        calculator(run);
        break;

      case 3:
        cout << '\n';
        cout << "TERMINATED PROGRAM" << endl;
        cout << '\n';
        run = false;
        break;
    }
  }
  return 0;
}
