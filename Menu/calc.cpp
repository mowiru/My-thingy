#include <iostream>
#include <string.h>

#include "myFunction.h"
#include "calc_function.cpp"

using namespace std;

int calculator(bool& parentRun){

  const char* ViewDataOptions[12] = {
    "Adding",
    "Subtraction",
    "Multiplication",
    "Deviding",
    "Modulo",
    "Pow",
    "Wurzel",
    "Prozent",
    "Prime",
    "Base of",
    "Go Back",
    "Quit"
  };

  float fX, fY;
  int iX, iY;

  bool run = true;

  while(run){

    int selection = showMenu(ViewDataOptions, "Calculator.", 12);

    switch (selection) {

      case 0:
          do{
            cout << '\n';
            cout << "Adding" << endl;
            fX = ui::decimalInput("x = ");
            fY = ui::decimalInput("y = ");
            cout << fX << " + " << fY << " = " << add(fX, fY) << endl;
          } while(ui::confirm("Again?"));
        break;

      case 1:
          do{
            cout << '\n';
            cout << "Subtraction" << endl;
            fX = ui::decimalInput("x = ");
            fY = ui::decimalInput("y = ");
            cout << fX << " - " << fY << " = " << subtract(fX, fY) << endl;
          } while(ui::confirm("Again?"));
        break;

      case 2:
          do{
            cout << '\n';
            cout << "Multiplication" << endl;
            fX = ui::decimalInput("x = ");
            fY = ui::decimalInput("y = ");
            cout << fX << " * " << fY << " = " << multiply(fX, fY) << endl;
          } while(ui::confirm("Again?"));
        break;

      case 3:
          do{
            cout << '\n';
            cout << "Deviding" << endl;
            fX = ui::decimalInput("x = ");
            fY = ui::decimalInput("y = ");
            cout << fX << " / " << fY << " = " << divide(fX, fY) << endl;
          } while(ui::confirm("Again?"));
        break;

      case 4:
          do{
            cout << '\n';
            cout << "Modulo" << endl;
            iX = ui::numberInput("x = ");
            iY = ui::numberInput("y = ");
            cout << iX << " % " << iY << " = " << mod(iX, iY) << endl;
          } while(ui::confirm("Again?"));
        break;

      case 5:
          do {
            cout << "Pow" << endl;
            iX = ui::numberInput("x = ");
            iY = ui::numberInput("y = ");
            cout << iX << " ^ " << iY << " = " << pow(iX, iY) << endl;
          } while(ui::confirm("Again?"));
        break;

      case 6:
          do{
            cout << "Wurzel" << endl;
            fX = ui::decimalInput("x = ");
            iY = ui::numberInput("y = ");
            cout << "die y "<< iY <<  "Wurzel aus " << fX << " = " << root(fX, iY) <<  endl;
          } while(ui::confirm("Again?"));
        break;

      case 7:
          do{
            cout << "Prozent" << endl;
            fX = ui::decimalInput("x = ");
            iY = ui::numberInput("y = ");
            cout << iY  << " Prozent von "<< fX << " = " << percent(fX, fY) << endl;
          } while(ui::confirm("Again?"));
        break;

      case 8:
          do{
            cout << "Prime" << endl;
            iX = ui::numberInput("x = ");
            iY = ui::numberInput("y = ");
            cout << "Die Primezahlen von X bis Y sind: " << endl;
            listPrimes(iX, iY);
          } while(ui::confirm("Again?"));

        break;

      case 9:
          do{
            cout << "Base" << endl;
            iX = ui::numberInput("x = ");
            iY = ui::numberInput("y = ");
            cout << iX << " mit der Basis " << iY << " is " << base(iX, iY) << "!"<< endl;
          } while(ui::confirm("Again?"));
        break;

      case 10:
          cout << "You went back" << endl;
          run = false;
        break;

      case 11:
          cout << "PROGRAM TERMINATED" << endl;
          run = false;
          parentRun = false;
        break;
    }
  }
  return 0;
}
