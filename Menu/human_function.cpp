#include <iostream>
#include "myFunction.h"

using namespace std;

void hr_print(struct hr* cH) {
  hr_print(cH, -1);
}
void hr_print(struct hr* cH, int index) {
  if (index >= 0)
    cout << "Index: " << index << " ";

  if (cH->id < 10)
    cout << "ID 0";
  else
    cout << "ID ";

  cout << cH->id << ". " << "Age: " << cH->age << ", " << "Wage: " << cH->wage << ";" << endl;
}

struct hr* newChain(int id){
    struct hr* result = new struct hr;

    result->id = id;
    result->age = rnd(14,70);
    result->wage = rnd(1500, 6000);
    result->next = NULL;

    return result;
}

void chain_push(struct hr*& myChain, int id){
  if(myChain == NULL){
    myChain = newChain(id);
  } else {
    struct hr* lastElement = myChain;
    while (lastElement->next !=NULL){
      lastElement = lastElement->next;
    }
    lastElement->next = newChain(id);
  }
}

int chain_count(struct hr* human){
  if(human == NULL){
    return 0;
  }
  int counter = 1;
  for(struct hr* current = human; current->next !=NULL; current = current->next){
    counter++;
  }
  return counter;
}

struct hr* chain_at(struct hr* human, int index){
  struct hr* current = human;
  for(int i = 0; i < index; i++){
    current = current->next;
  }
  return current;
}

void chain_insert(struct hr*& human, int id, int target){
  struct hr* newComponent = newChain(id);
  if(target == 0){
    newComponent->next = human;
    human = newComponent;
    return;
  }
  struct hr* current = human;
  for(int i = 0; i < target -1; i++){
    current = current->next;
  }
  newComponent->next = current->next;
  current->next = newComponent;
}

void chain_remove(struct hr*& human, int target){
  cout << "TARGET: " << target << endl;
  struct hr* nnComponent;
  if(target == 0){
    nnComponent = human->next;
    cout << "DELETING: " << human->id << endl;
    delete human;
    human = nnComponent;
    return;
  }
  struct hr* current = human;
  for(int i = 0; i < target -1; i++){
    current = current->next;
  }
  nnComponent = current->next->next;
  cout << "DELETING: " << current->next->id << endl;
  delete current->next;
  current->next = nnComponent;
}
