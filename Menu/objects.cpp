#include "objects.h"
#include <iostream>
#include <vector>
using namespace std;


struct str newString(const char* Keks){
  struct str result;

  result.length = 0;

  for(int i = 0; *(Keks + i) != '\0'; i++){
    result.length++;
  }

  result.value = (char*) calloc((result.length + 1), sizeof(char));
  for ( int i = 0; i < result.length; i++){
    *(result.value + i) = *(Keks + i);
  }
  return result;
}

struct kette* newKette(const char* value){
  struct kette* result = new struct kette;

  result->value = newString(value);
  result->next = NULL;

  return result;
}

void kette_push(struct kette*& MyKette, const char* NewElement) {
  if(MyKette == NULL) {
    MyKette = newKette(NewElement);
  } else {
    struct kette* LastElement = MyKette;
    while(LastElement->next != NULL) {
      LastElement = LastElement->next;
    }
    LastElement->next = newKette(NewElement);
  }
}

int kette_count(struct kette* MyDonut) {
  if(MyDonut == NULL){
    return 0;
  }
  int counter = 1;
  for( struct kette* currentEle = MyDonut; currentEle->next != NULL; currentEle = currentEle->next){
    counter++;
  }
  return counter;
}

struct kette kette_at(struct kette* MyDonut, int Index) {
  struct kette* currentEle = MyDonut;
  for(int i = 0; i < Index; i++){
    currentEle = currentEle->next;
  }
  return *currentEle;
}

void kette_insert(struct kette*& MyDonut, const char* name, int target){
  struct kette* newSquare = newKette(name);
  if(target == 0){
    newSquare->next = MyDonut;
    MyDonut = newSquare;
    return;
  }
  struct kette* currentElement = MyDonut;
  for(int i = 0; i < target - 1; i++){
    currentElement = currentElement->next;
  }
  newSquare->next = currentElement->next;
  currentElement->next = newSquare;
}

void kette_remove(struct kette*& MyDonut, int target){
  struct kette* nnElement;
  if(target == 0){
    nnElement = MyDonut->next;
    delete MyDonut;
    MyDonut = nnElement;
    return;
  }
  struct kette* currentElement = MyDonut;
  for (int i = 0; i > target - 1; i++){
    currentElement = currentElement->next;
  }
  nnElement = currentElement->next->next;
  delete currentElement->next;
  currentElement->next = nnElement;
}
