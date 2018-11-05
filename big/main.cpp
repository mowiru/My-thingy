#include <iostream>
#include <string.h>

using namespace std;


const int W = 5; //width
const int H = 3; //height
const int S = 2; //size

int strlen(char* str){
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

int main(int argc, char* argv[]){

cout<<'\n'<<endl;
  char TOP[S+2];
  char ROW[S+2];

  if(argc > 1){
    int maxLength = S;
    for (int i = 1; i < argc; i++){
      int currentlenght = strlen(argv[i]);
      if (maxLength < currentlenght){
        maxLength = currentlenght;
      }
      if(i >= H){
        break;
      }
    }

    for(int x = 0; x < (S+2); x++){
      if(x == 0){
        TOP[x] = '+';
        ROW[x] = '|';

      }else if(x == S+1){
        TOP[x] = '\0';
        ROW[x] = '\0';

      }else{
        TOP[x] = '-';
        ROW[x] = ' ';
      }
    }

    for (int i = 0; i < H; i++){
      int argi = i+1;
      for (int j = 0; j < W; j++){
        if(j == 0){
          cout<<"+";
          hrl(maxLength, "-");
        }else{
          cout<<TOP;
        }
      }
      cout<<"+"<<endl;
      for(int x = 0; x < S; x++ ){

        for (int j = 0; j < W; j++){
          if(j == 0){
            cout<<"|";
            int currentlenght = 0;
            if((argi < argc) && (x == 0)){
              currentlenght = strlen(argv[argi]);
              cout<<argv[argi];
            }
            hrl(maxLength - currentlenght, " ");
          }else{
            cout<<ROW;
          }
        }
        cout<<"|"<<endl;
      }
    }
    for (int j = 0; j < W; j++){
      if(j == 0){
        cout<<"+";
        hrl(maxLength, "-");
      }else{
        cout<<TOP;
      }
    }
    cout<<"+"<<endl;
    cout<<'\n'<<endl;

  }else{
    cout<<"Ney dat funzt nit!"<<endl;
    cout<<'\n'<<endl;
  }

  return 0;
}
