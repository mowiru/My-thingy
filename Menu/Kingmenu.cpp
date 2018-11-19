#include <iostream>
#include <string.h>
#include <math.h>
#include "myFunction.h"

using namespace std;

int main(){
  
  bool run = true;

  //Mainmenu Option List and Count how many
  const char* MainMenuOptions[5] = {
    "People.",
    "Cars.",
    "Calculator.",
    "Humanresources.",
    "Quit"
  };

  while(run){
    switch(showMenu( MainMenuOptions,"TopMenu", 5)){
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
          cout << "You have choosen Humanresources." << endl;
          cout << '\n';
          humanresources(run);
        break;

      case 4:
          cout << '\n';
          cout << " !!! TERMINATED PROGRAM !!!" << endl;
          cout << '\n';
          run = false;
        break;
    }
  }
  return 0;
}
