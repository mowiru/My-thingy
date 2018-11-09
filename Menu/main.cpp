#include <iostream>
#include <string.h>

#include "my_function.h"

using namespace std;

int main(){

  bool run = true;
  char strl;
  char* fn; //firstname
  char* ln; //lastname
  int a; //ages
  char* c; //city
  int counter = 0;

  while(run){
    char* response;
    menu();
    response = ui::readLine();
    cout << '\n';
    if (*response == 'c'){
      run = false;
    }
    if (*response == '1'){
      char* choice;
      if (counter == 0){
        cout << "No Data has been entered jet." << endl;
        cout << '\n';

      }else if(counter > 0){
        categorie();
        choice = ui::readLine();
        if (*choice == '1'){
          dataOutput("You have choosen the categorie Firstname.", counter, fn);

        }else if (*choice == '2'){
          dataOutput("You have choosen the categorie Lastname.", counter, ln);

        }else if (*choice == '3'){
          dataOutput("You have choosen the categorie Age.", counter, to_string(a).c_str());

        }else if (*choice == '4'){
          dataOutput("You have choosen the categorie City.", counter, c);

        }else if (*choice == '5'){
          cout << "You have choosen the categorie All Data." << endl;
          cout << '\n' << endl;
          cout << counter << ". " << fn << " " << ln << ", " << a << ", " << c << ";" << endl;

        }else if (*choice != '1', *choice != '2', *choice != '3', *choice != '4', *choice != '5'){
          cout << "Not a valid option!" << endl;
        }
      }

    }else if(*response == '2'){
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

    }else if (*response != 1 || *response != 2){
      cout << '\n';
      cout << "Not a give number. Choose 1 or 2!" << endl;
      cout << '\n';
    }
  }
  return 0;
}
