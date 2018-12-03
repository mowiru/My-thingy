#include <iostream>
#include "objects.hpp"
#include <vector>
#include <string.h>
#include "str.hpp"

using namespace std;

void Example1();

int main () {
  /*
    ->: pointer member;
    .: objekt member;
    :: : static member operator;
    &: referenzierungs(ref);
    *: Dereferenzierungs operator(pointer);
    ----------------------------------
    +: addition;
    -: substraction;
    *: multi;
    /: divi,
    %: modulo;
    =: zuweisung;
    ^: XOR;
    ==: gleich;
    &: binäres und;
    |: binäre oder;
    ||: oder;
    &&: und;
    !: not;
    !=: not equals;
    <: kleiner;
    >: grösser:
    <=: kleiner gleich;
    >=: grösser gleich;
    <<: shift operator (cout);
    >>: shift operator (cin);
    []: indizierungs operator;

   */

  str s1 = "Peter";
  str s2 = "Otto";
  str s3 = s1 + s2;
  //str s4 = 15;

  s1.padLeft(4);
  s1.add(s2);

  cout << s3 << endl;

  //s1 = "Otto";

  /*str s1("Linksbuendig"),
      s2("Rechtsbuendig"),
      s3("Mittig"),
      s4("Umfasst"),
      s5("Centered"),
      s6("Donaudampfschiffobergeselschaftskapitaen");

  cout << "|" << s1.padRight(20)->c() << "|" << endl;
  cout << "|" << s2.padLeft(20)->c() << "|" << endl;
  cout << "|" << s3.padRight(13)->padLeft(20)->c() << "|" << endl;
  cout << "|" << s4.padLeft(14,'>')->padRight(20,'<')->c() << "|" << endl;
  cout << "|" << s5.center(20)->c() << "|" << endl;
  cout << "|" << s6.padLeft(3,'#')->c() << "|" << endl;*/

  return 0;
}

  //Example1();
/*
  cout << "############################################################\n";

  str neuLeer;

  str Name("Moritz");

  cout << "neuLeer: Der Str \"" << neuLeer.c() << "\" ist \"" << neuLeer.length() << "\" zeichen lang" << endl;

  cout << "Name:    Der Str \"" << Name.c() << "\" ist \"" << Name.length() << "\" zeichen lang" << endl;

  cout << "############################################################\n";


  str Teil1("Käse");
  str Teil2("kuchen");

  str* alleTeile = Teil1.add(Teil2);

  str* ErrorOutput = new str("Fehler:");
  ErrorOutput = ErrorOutput->add("System Fehler")->add("Uhrzeit")->add("Exception")->add("Momentahne User");
  cout << ErrorOutput->c() << endl;

  cout << "--------------" << endl;
  cout << alleTeile->c() << endl;
  cout << "isch lega" << endl;
  cout << "--------------" << endl;

  str langerStr("AffeElefandPferd");

  str* kleinerStr = langerStr.substr(4,8);
  cout << '\n';
  cout << "--------------" << endl;
  cout << kleinerStr->c() << " = Elefand" << endl;
  cout << "--------------" << endl;
  cout << '\n';


  str TestStr1("Otto");
  str TestStr2("Otto");
  str TestStr3("NichtOtto");
  str* TestStr4 = new str("NichtOtto");


  cout << "new T1L: " << TestStr1.length(3)  << endl;
  cout << "new T2L: " << TestStr2.length(17)  << endl;
  cout << "new T3L: " << TestStr3.length(-60)  << endl;


  cout << "------------------------------" << endl;

  cout << "\"" << TestStr1.c() << "\"\\0" << endl;
  cout << "\"" << TestStr2.c() << "\"\\0" << endl;
  cout << "\"" << TestStr3.c() << "\"\\0" << endl;

  return 0;


  cout << "true     : " << (true    ) << endl;
  cout << "false    : " << (false   ) << endl;
  cout << "1        : " << (1       ) << endl;
  cout << "0        : " << (0       ) << endl;
  cout << "(bool)19 : " << ((bool)19) << endl;
  cout << "(bool)0  : " << ((bool)0 ) << endl;
  cout << "25 == 25 : " << (25 == 25) << endl;
  cout << "25 == 24 : " << (25 == 24) << endl;


  cout << "------------------------------" << endl;


  cout << '\n';
  if(TestStr1.equals("Otto")) {
    cout << "Richtig" << endl;
  } else {
    cout << "Falsch" << endl;
  }
  cout << '\n';
  if(TestStr1.equals(TestStr2)) {
    cout << "Richtig" << endl;
  } else {
    cout << "Falsch" << endl;
  }
  cout << '\n';
  if(TestStr1.equals(TestStr3)) {
    cout << "Falsch" << endl;
  } else {
    cout << "Richtig" << endl;
  }
  cout << '\n';
  if(TestStr1.equals(TestStr3)) {
    cout << "Falsch" << endl;
  } else {
    cout << "Richtig" << endl;
  }
  cout << '\n';
  return 0;
}


void Example1() {
  vector<Person*> myPersons;

  myPersons.push_back(new Person("mo1","ru",25));
  myPersons.push_back(new Person("mo2","ru",25));
  myPersons.push_back(new Employee("mo3","ru",25, 5000));
  myPersons.push_back(new Chef("Andreas","K.",33,10000,"CEO"));
  myPersons.push_back(new Person("mo4","ru",25));

  Person* pers66 = new Employee("A", "B", 10, 99);
  pers66->print();

  //Ausgabe --------------
  for(vector<Person*>::iterator it = myPersons.begin(); it != myPersons.end(); it++) {
    (*it)->print();
  }
}*/
