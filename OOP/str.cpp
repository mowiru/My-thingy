#include <iostream>
#include <string.h>
#include "str.hpp"

using namespace std;

str::str() {
  this->value = (char*) calloc(1,sizeof(char));
  this->_length = 0;
}

str::str(char* val){
  this->value = val;
  this->_length = strlen(val);
}

str::str(const char* val){
  this->_length = strlen(val);
  this->value = (char*) calloc(this->_length,sizeof(char));
  strcpy(this->value, val);
}

const char* str::c() {
  return this->value;
}

int str::length() {
  return this->_length;
}

int str::length(int newLength){
  if(newLength >= 0){
    char* newStr = (char*) calloc(newLength + 1, sizeof(char));
    strcpy(newStr, this->value);
    *(newStr + newLength) = '\0';
    if(newLength > this->_length) {
      memset(newStr + this->_length, ' ', newLength - this->_length);
    }
    this->_length = newLength;
    free(this->value);
    this->value = newStr;
  }
  return this->_length;
}

str* str::padRight(int number){
  return str::padRight(number, ' ');
}

str* str::padRight(int number, char space){
  if(number < this->_length) return new str(this->value);

  char* newStr = (char*) calloc(number + 1, sizeof(char));
  strcpy(newStr, this->value);
  *(newStr + number) = '\0';
  memset(newStr + this->_length, space, number - this->_length);

  return new str(newStr);
}

str* str::padLeft(int number){
  return str::padLeft(number, ' ');
}

str* str::padLeft(int number, char space){
  if(number < this->_length) return new str(this->value);

  char* newStr = (char*) calloc(number + 1, sizeof(char));
  strcpy(newStr + number - this->_length, this->value);
  *(newStr + number) = '\0';
  memset( newStr, space,  number - this->_length);

  return new str(newStr);

}

str* str::center(int number){
  return str::center(number, ' ');
}
str* str::center(int number, char space){
  return str::center(number, space, space);
}

str* str::center(int number, char space, char end){
  int t1 = (number - this->_length) / 2;
  return this->padLeft(t1 + this->_length, space)->padRight(number, end);
}



















str* str::add(str& second){
  return str::add(&second);
}

str* str::add(const char* second){
  return str::add(new str(second));
}

str* str::add(char* second){
  return str::add(new str(second));
}

str* str::add(str* second){
  char* result = (char*) calloc(this->_length + second->_length + 1,sizeof(char));
  strcpy(result, this->value);
  strcpy(result + this->_length, second->value);
  return new str(result);
}

str* str::substr(int start, int length){
  char* result = (char*) calloc(length + 1,sizeof(char));
  strcpy(result, this->value + start);
  *(result + length) = '\0';
  return new str(result);
}

//---------------------------------------------------------------------------
// strcmp(A,B)

bool str::equals(str& given){
  return str::equals(&given);
}

bool str::equals(const char* given){
  return str::equals(new str(given));
}

bool str::equals(char* given){
  return str::equals(new str(given));
}

bool str::equals(str* given){
  return (bool)(strcmp(this->value, given->value) == 0);
}
