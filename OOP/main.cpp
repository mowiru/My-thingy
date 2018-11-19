#include <iostream>
#include "objects.hpp"
#include <vector>
#include "str.hpp"

using namespace std;

int main () {

  str neuLeer;

  char* rfgdjkl = "HOHOHO";
  str Iwas(rfgdjkl);

  str Name("Moritz");

  cout << "neuLeer: Der Str \"" << neuLeer.c() << "\" ist \"" << neuLeer.length() << "\" zeichen lang" << endl;
  cout << "Iwas:    Der Str \"" << Iwas.c() << "\" ist \"" << Iwas.length() << "\" zeichen lang" << endl;
  cout << "Name:    Der Str \"" << Name.c() << "\" ist \"" << Name.length() << "\" zeichen lang" << endl;

  return 0;
}

void Example1() {
  vector<Person*> myPersons;

  myPersons.push_back(new Person("mo1","ru",25));
  myPersons.push_back(new Person("mo2","ru",25));
  myPersons.push_back(new Employee("mo3","ru",25, 5000));
  myPersons.push_back(new Person("mo4","ru",25));

  Person* pers66 = new Employee("A", "B", 10, 99);
  pers66->print();

  //Ausgabe --------------
  for(vector<Person*>::iterator it = myPersons.begin(); it != myPersons.end(); it++) {
    (*it)->print();
  }
}
