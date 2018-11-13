#include <iostream>
#include <string.h>
#include <cmath>
#include <list>

#include "my_function.h"

using namespace std;

float add(float x, float y){
  return x + y;
}

float subtract (float x, float y){
  return x - y;
}

float multiply (float x, float y){
  return x * y;
}

float divide (float x, float y){
  return x / y;
}

float mod (int x, int y){
  return x % y;
}

float pow (float x, int y){

  float result = 1;

  for (int i = 0; i < y; i++){
    result = result * x;
  }
  return result;
}

float root (float x, int y){
  return std::pow(x, (1.0 / (float)y));
}

float percent (float x, int y){
  return x*(y/100);
}

bool isPrime(int N) {
  if (N < 2){
    return false;
  }
  for(int i = 2; i < N; i++){
    if ((N % i) == 0){
      return false;
    }
  }
  return true;
}

void listPrimes (int x, int y){
  for( int i = x; i <= y; i++){
    if(isPrime(i)){
      cout << i << endl;
    }
  }
}

char* base (int x, int y){

  const char* letters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  list<char> l;
  int e = x;
  int r = 0;

  do{
    r = e % y;
    e = e / y;
    l.push_front(*(letters + r));
  }while (e > 0);
  l.push_back('\0');
  char* result = (char*) malloc(l.size() * sizeof(char));
  int i = 0;
  for(list<char>::iterator it = l.begin(); it != l.end(); it++) {
    *(result + i) = *it;
    i++;
  }
  return result;
}
