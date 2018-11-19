#ifndef __myFunction_h__
#define __myFunction_h__

int calculator(bool& parentRun);

int car_selection(bool& parentRun);

int humanresources(bool& parentRun);

int people_selection(bool& parentRun);

struct Mitarbeiter{
  int id;
  int age;
  int plz;
  int hNumber;
  char* firstName;
  char* lastName;
  char* gender;
  char* street;
  char* city;
  char* country;
  float hight;
  float weight;
  float wage;
  float hLone;
};

struct hr {
  int id;
  int age;
  double wage;
  struct hr* next;
};

void hr_print(struct hr* cH);
void hr_print(struct hr* cH, int index);

struct str {
  char* value;
  int length;
};

int rnd(int min, int max);

struct hr* newChain(int id);

int chain_count(struct hr* human);

struct str newString(const char* Keks);

void chain_push(struct hr*& myChain, int id);

struct hr* chain_at(struct hr* human, int index);

void chain_remove(struct hr*& human, int target);

void chain_insert(struct hr*& human, int id, int target);

void dataOutput(const char* label, int counter, const char* value);

int showMenu(const char* options[], const char* title, int optionCount);

namespace ui {

  bool confirm(const char* msg);

  char* readLine();
  char* readLine(int& length);
  char* readLine(const char* msg);
  char* readLine(const char* msg, int& length);

  int numberInput();
  int numberInput(bool& cancel);
  int numberInput(const char* msg);
  int numberInput(const char* msg, bool& cancel);

  float decimalInput();
  float decimalInput(bool& cancel);
  float decimalInput(const char* msg);
  float decimalInput(const char* msg, bool& cancel);
}

#endif
