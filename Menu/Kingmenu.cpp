#include <iostream>
#include <string.h>
#include <math.h>
#include "objects.h"
#include "my_function.h"

#include "auto.cpp"
#include "people.cpp"
#include "calc.cpp"
#include "human.cpp"

using namespace std;


int main(){
  /*
  struct kette* MyKette = NULL;

  while (true) {
    char* input = ui::readLine("Enter Person: ");
    if(strcmp(input,"cancel") == 0) break;
    kette_push(MyKette, input);
  }

  //Liste ist fertig

  cout << "MyKette hat (" << kette_count(MyKette) << ") Elemente. Diese sind:" << endl;
  for(int i = 0; i < kette_count(MyKette); i++) {
    cout << kette_at(MyKette, i).value.value << endl;
  }

  return 0;
  */


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
          hr(run);
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
