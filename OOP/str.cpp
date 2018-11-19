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
