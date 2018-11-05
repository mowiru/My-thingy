#include <iostream>

using namespace std;

int main(int argc, char** argv) {

  cout<<"Cow says:"<<endl;
  
  if (argc > 1) {
    for(int i = 1; i < argc; i++) {
      cout<<"  "<<*(argv+i)<<endl;
      //cout<<(argv+i)<<endl;
    }
  }

  return 0;
}
