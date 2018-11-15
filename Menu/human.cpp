#include <iostream>
#include <string.h>
#include <math.h>
#include "objects.h"
#include "my_function.h"

#include "human_function.cpp"

bool RND_SEED_IS_SET = false;




//rnd(10,100)
int rnd(int min, int max){
  if(!RND_SEED_IS_SET) {
    srand(time(NULL));
    RND_SEED_IS_SET = true;
  }
  return min + (rand() % ((max - min)+ 1));
}

int hr(bool& parentRun){

  bool run = true;

  int x;

  x = ui::numberInput("How many Employee's? ");

  struct Employee
  {
    int id;
    int age;
    double wage;
  } MyEmpl[x];


  do{
    cout << '\n';
    cout << "This is the list of Employee's: " << endl;
    cout << '\n';

    for(int i = 0; i < x; i++){
      MyEmpl[i].id = i+1;
      //MyEmpl[i].age = rand() % 65 + 25;
      MyEmpl[i].age = rnd(14,70);
      MyEmpl[i].wage = rnd(1500, 6000);

      if (MyEmpl[i].id < 10){
        cout << "ID 0" << MyEmpl[i].id << ". " << "Age: " << MyEmpl[i].age << ", " << "Wage: " << MyEmpl[i].wage << ";" << endl;
      }else if(MyEmpl[i].id > 9){
        cout << "ID " << MyEmpl[i].id << ". " << "Age: " << MyEmpl[i].age << ", " << "Wage: " << MyEmpl[i].wage << ";" << endl;
      }
    }
    cout << '\n';
    for(int i = 0; i < x; i++){
      if(MyEmpl[i].age > 65 && MyEmpl[i].wage < 5000 ){
        cout << "ID " << MyEmpl[i].id << ". " << "should retire." << endl;
      }else if(MyEmpl[i].age < 65 && MyEmpl[i].wage > 5000){
        cout << "ID " << MyEmpl[i].id << ". " << "should be checked. " << endl;
      }else if (MyEmpl[i].age > 65 && MyEmpl[i].wage > 5000){
        cout << "ID " << MyEmpl[i].id << ". " << "should be fired! " << endl;
      }else if (MyEmpl[i].age < 18){
        MyEmpl[i].wage = 0;
        cout << "ID " << MyEmpl[i].id << ". " << "is to young. " << endl;
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

  /*
  while(run){

    int selection = showMenu(ViewDataOptions, "Choose Path", 4);

    switch (selection) {

      case 0:
          cout << '\n';
          cout << "Insert Data" << endl;
        break;

      case 1:
        do{
          cout << '\n';
          cout << "Delete Data" << endl;
          x = ui::numberInput("Which ID?");
          delete MyEmpl[x];
          cout << "ID:   " << MyEmpl[x].id << endl;
          cout << "Age:  " << MyEmpl[x].age << endl;
          cout << "Wage: " << MyEmpl[x].wage << endl;
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
  /*do {
    int index = ui::numberInput("View a specific ID: ") - 1;

    cout << "ID:   " << MyEmpl[index].id << endl;
    cout << "Age:  " << MyEmpl[index].age << endl;
    cout << "Wage: " << MyEmpl[index].wage << endl;

  } while(ui::confirm("View another?"));*/


  return 0;
}
