#include <iostream>
#include <string.h>

using namespace std;


const int W = 5; //width
const int H = 3; //height
const int S = 2; //size

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

  const char* TLC = "\u250C"; //┌
  const char* TS = "\u2500"; //─
  const char* TRC = "\u2510"; // ┐
  const char* LS = "\u2502"; // │
  const char* RS = "\u2502"; // │
  const char* BLC = "\u2514"; // └
  const char* BS = "\u2500"; //─
  const char* BRC = "\u2518"; // ┘
  const char* RSNR = "\u251c"; // ┤
  const char* LSNR = "\u2524"; // ├
  const char* CEN = "\u253c"; // ┼
  const char* TCEN = "\u252c"; // ┬
  const char* BCEN = "\u2534"; // ┴

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
    cout<<TCEN;
    hrl(maxLength, TS);
    cout<<TRC<<endl;

    for (int d = 1; d < argc; d++) {
      cout<<LS<<argv[d];
      hrl(maxLength - strlen(argv[d]), " ");
      cout<<RS;
      hrl(maxLength, " ");
      cout<<RS<<endl;

      if (d != argc -1 ){
        cout<<RSNR;
        hrl(maxLength, BS);
        cout<<CEN;
        hrl(maxLength, BS);
        cout<<LSNR<<endl;
      }
    }

    cout<<BLC;
    hrl(maxLength, BS);
    cout<<BCEN;
    hrl(maxLength, BS);
    cout<<BRC<<endl;

    //┌ ┐─│└ ┘├ ┤
    cout<<"--"<<endl;
    cout<<"|"<<"  "<<"|"<<endl;
    cout<<"|"<<"  "<<"|"<<endl;
    cout<<"--"<<endl;

  } else {
    cout<<"mooo????"<<endl;

  }
  return 0;
}

/*int main(int argc, char** argv) {
  if(argc > 1){
    cout<<*(argv+1)<<endl;
  }else{
    cout<<"mooo????"<<endl;
  }
    return 0;
}

cout<<"    ____  "<<endl;
cout<<"  /       \ "<<endl;
cout<<" /         \ "<<endl;
cout<<" |         |"<<endl;
cout<<" |         |"<<endl;
cout<<" \        /"<<endl;
cout<<"  \ ____ /"<<endl;



*/
