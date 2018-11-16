#include <iostream>
#include <math.h>
#include <string.h>
#include "objects.h"
#include "my_function.h"

using namespace std;

bool RND_SEED_IS_SET = false;

int rnd(int min, int max){
  if(!RND_SEED_IS_SET) {
    srand(time(NULL));
    RND_SEED_IS_SET = true;
  }
  return min + (rand() % ((max - min)+ 1));
}

int humanresources(bool& parentRun){

  bool run = true;

  int x;

  x = ui::numberInput("How many Employee's? ");

  struct hr* MyHumans = NULL;

  do{
    cout << '\n';
    cout << "This is the list of Employee's: " << endl;
    cout << '\n';

    for(int i = 0; i < x; i++){
      chain_push(MyHumans, i + 1);

      if (chain_at(MyHumans, i)->id < 10){
        cout << "ID 0" << chain_at(MyHumans, i)->id << ". " << "Age: " << chain_at(MyHumans, i)->age << ", " << "Wage: " << chain_at(MyHumans, i)->wage << ";" << endl;
      }else if(chain_at(MyHumans, i)->id > 9){
        cout << "ID " << chain_at(MyHumans, i)->id << ". " << "Age: " << chain_at(MyHumans, i)->age << ", " << "Wage: " << chain_at(MyHumans, i)->wage << ";" << endl;
      }
    }
    cout << '\n';
    for(int i = 0; i < x; i++){
      if(chain_at(MyHumans, i)->age > 65 && chain_at(MyHumans, i)->wage < 5000 ){
        cout << "ID " << chain_at(MyHumans, i)->id << ". " << "should retire." << endl;
      }else if(chain_at(MyHumans, i)->age < 65 && chain_at(MyHumans, i)->wage > 5000){
        cout << "ID " << chain_at(MyHumans, i)->id << ". " << "should be checked. " << endl;
      }else if (chain_at(MyHumans, i)->age > 65 && chain_at(MyHumans, i)->wage > 5000){
        cout << "ID " << chain_at(MyHumans, i)->id << ". " << "should be fired! " << endl;
      }else if (chain_at(MyHumans, i)->age < 18){
        chain_at(MyHumans, i)->wage = 0.0;
        cout << "ID " << chain_at(MyHumans, i)->id << ". " << "is to young. " << endl;
      }
    }
    cout << '\n';

  }while(ui::confirm("Again?"));

  ui::confirm("Would you like to do something else with this data?");

  const char* ViewDataOptions[4] = {
    "Insert Data.",
    "Delete Data.",
    "Back.",
    "Quit."
  };

  while(run){
    int selection = showMenu(ViewDataOptions, "Choose Path", 4);
    struct hr* myChain = NULL;

    switch (selection) {

      case 0:
        do{
          cout << '\n';
          cout << "Insert Data" << endl;
          chain_insert(myChain, 4, 6);
        }while(ui::confirm("Again?"));
        break;

      case 1:
        do{
          cout << '\n';
          cout << "Delete Data" << endl;
          chain_remove(myChain, 3);

        }while(ui::confirm("Again?"));
        break;

      case 2:
          cout << "You went back" << endl;
          run = false;
        break;

      case 3:
          cout << "PROGRAM TERMINATED" << endl;
          run = false;
          parentRun = false;
        break;
    }
  }

  do {
    int i = ui::numberInput("View a specific ID: ") - 1;

    cout << "ID:   " << chain_at(MyHumans, i)->id << endl;
    cout << "Age:  " << chain_at(MyHumans, i)->age << endl;
    cout << "Wage: " << chain_at(MyHumans, i)->wage << endl;

  } while(ui::confirm("View another?"));

  return 0;
}
