#include <iostream>
#include <string.h>

#include "my_function.h"

using namespace std;

int car_selection(bool& parentRun){

  //Mainmenu Option List and Count how many
  const char* MainMenuOptions[4] = {
    "View Car's",
    "Enter new Car",
    "Back",
    "Quit"
  };

  //Sub Menu after choosing option 1 with Option and Count how many
  const char* ViewDataOptions[7] = {
    "Brand",
    "Design",
    "Year",
    "Color",
    "All",
    "Back",
    "Quit"
  };

  //State of run at Start
  bool run = true;

  //What do i need?
  char* brand; //brand
  char* design; //design
  int year; //year
  char* color; //color
  int counter = 0;
  int viewSelection;

  //call run within while
  while(run){//

    int selection = showMenu(MainMenuOptions, "Car_Menu", 4);

    //run Case Scenario Between Menus
    switch(selection){
      case 0:
        viewSelection = showMenu(ViewDataOptions, "View Data Menu", 7);
        //Display Menu Point within in submenu including counter
        switch(viewSelection){
          case 0:
            dataOutput("You have choosen the categorie Brand.", counter, brand);
            break;
          case 1:
            dataOutput("You have choosen the categorie Design.", counter, design);
            break;
          case 2:
            dataOutput("You have choosen the categorie Year.", counter, to_string(year).c_str());
            break;
          case 3:
            dataOutput("You have choosen the categorie Color.", counter, color);
            break;
          //if case 4 display everything in a line
          case 4:
            cout << "You have choosen the categorie All." << endl;
            cout << '\n' << endl;
            cout << counter << ". " << brand << " " << design << ", " << year << ", " << color << ";" <<  endl;
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

    case 1:
      cout << "Input Brand, Design, Year and Color: ";
      brand = ui::readLine("Brand: ");
      design = ui::readLine("Design: ");
      year = ui::numberInput("Year: ");
      color = ui::readLine("Color ");
      counter++;
      cout << '\n';
      cout << counter << ". " << "You have a " << endl;
      cout << brand << ", " << design << " from the year " << endl;
      cout << year << " and it is " << color << "." << endl;
      cout << '\n';
      break;

    case 2:
        cout << '\n';
        cout << "You have gone back to the top menu a.k.a. start." << endl;
        cout << '\n';
        run = false;
      break;

    case 3:
        cout << '\n';
        cout << "PROGRAM TERMINATED" << endl;
        cout << '\n';
        run = false;
        parentRun = false;
      break;
    }
  }
  return 0;
}
