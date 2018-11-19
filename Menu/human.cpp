#include <iostream>
#include <math.h>
#include <string.h>
#include "myFunction.h"

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

  int x, HumanCount;

  x = ui::numberInput("How many Employee's? ");

  //list create START__________________________________________________________
  struct hr* MyHumans = NULL;
  for(int i = 0; i < x; i++) {
    chain_push(MyHumans, i + 1);
  }
  //list creat END_____________________________________________________________

  //Resourcen Ausgabe START_____________________________________________________________
  do{
    cout << '\n';
    cout << "This is the list of Employee's: " << endl;
    cout << '\n';

    HumanCount = chain_count(MyHumans);

    for(int i = 0; i < HumanCount; i++){
      struct hr* cH = chain_at(MyHumans, i);
      if(cH->age > 65 && cH->wage < 5000 ){
        cout << "ID " << cH->id << ". " << "should retire." << endl;
      }else if(cH->age < 65 && cH->wage > 5000){
        cout << "ID " << cH->id << ". " << "should be checked. " << endl;
      }else if (cH->age > 65 && cH->wage > 5000){
        cout << "ID " << cH->id << ". " << "should be fired! " << endl;
      }else if (cH->age < 18){
        cH->wage = 0.0;
        cout << "ID " << cH->id << ". " << "is to young. " << endl;
      }
    }
    cout << '\n';
    for(int i = 0; i < HumanCount; i++){
      struct hr* cH = chain_at(MyHumans, i);
      hr_print(cH,i);
    }
    cout << '\n';

  }while(ui::confirm("Again?"));
  //Resourcen Aushabe END_____________________________________________________________


  if(ui::confirm("Would you like to do something else with this data?")) {

    const char* ViewDataOptions[5] = {
      "Insert Data.",
      "Delete Data.",
      "List All.",
      "Back.",
      "Quit."
    };

    while(run){
      int selection = showMenu(ViewDataOptions, "Choose Path", 5);

      switch (selection) {

        case 0: //Insert
          do{
            cout << '\n';
            cout << "Insert Data" << endl;
            chain_insert(MyHumans, 4, 6);
          }while(ui::confirm("Again?"));
          break;

        case 1: //Delete
          do{
            cout << '\n';
            cout << "Delete Data" << endl;
            chain_remove(MyHumans, 3);

          }while(ui::confirm("Again?"));
          break;

        case 2: //List All
          cout<<"All Humans:"<<endl;
          HumanCount = chain_count(MyHumans);
          for(int i = 0; i < HumanCount; i++){
            struct hr* cH = chain_at(MyHumans, i);
            hr_print(cH,i);
          }
          break;

        case 3: //Back
            cout << "You went back" << endl;
            run = false;
          break;

        case 4: //Quit App
            cout << "PROGRAM TERMINATED" << endl;
            run = false;
            parentRun = false;
          break;
      }
    }
  }

  return 0;
}
