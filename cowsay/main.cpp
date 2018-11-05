#include <iostream>
#include <string.h>

using namespace std;


int strlenght(char* str){
  int x = 0;
  while(*(str + x) != 0){
    x++;
  }    //row++
  return x;
}

void hrl(int l, const char* c){
  for (int i = 0; i < l; i++) {
    cout<<c;
  }
}

int main(int argc, char* argv[]) {

  const char* TLC = "\u250C";
  const char* TS = "\u2500";
  const char* TRC = "\u2510";
  const char* LS = "\u2502";
  const char* RS = "\u2502";
  const char* BLC = "\u2514";
  const char* BS = "\u2500";
  const char* BRC = "\u2518";

  if(argc > 1){
    int maxLength = 0;
    for (int i = 1; i < argc; i++){
      int currentlenght = strlen(argv[i]);
      if (maxLength < currentlenght){
        maxLength = currentlenght;
      }
    }

    cout<<TLC;
    hrl(maxLength, TS);
    cout<<TRC<<endl;

    for (int d = 1; d < argc; d++) {
      cout<<LS<<argv[d];
      hrl(maxLength - strlen(argv[d]), " ");
      cout<<RS<<endl;
    }
    cout<<BLC;
    hrl(maxLength, BS);
    cout<<BRC<<endl;

  } else {
    cout<<"mooo????"<<endl;

  }
  return 0;
}
