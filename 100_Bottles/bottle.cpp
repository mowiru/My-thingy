#include <iostream>
#include <string.h>

using namespace std;


void beer(int B){
  cout<<B<<" beer"<<endl;
  if (B > 0) {
    beer(B - 1);
    cout<<B<<" beer. ";
  }
}

int main(){
  int B;
  cout << "B: ";
  cin >> B;
  cout << "Where choosen."<<endl;
  beer(B);
  return 0;
  cout << '\n';
}


void beer(int B){
  for(int x = -1, i = B; i != (B +1); i += x){
    if(i > 1){
      if (x > 0)
        cout << "Put one up, " << endl;
        cout << i << " bootle's of beer on the wall."<<endl;
        cout << i << " bootle's of beer."<<endl;
        cout << '\n';
      if(x < 0)
        cout << "Take one down, pass it around," << endl;

    }else if(i == 0){
      cout << "No more beer on the wall. Go and buy '"<< B <<"' new beer's!"<<endl;
      cout << '\n';
    }else{
      cout << i << " last bootle of beer."<<endl;
      cout << '\n';
    }
    if(i == 0){
      x *=  -1;
    }
  }
}

int main(){
  
  int B = 10;

  if(cancel){
    cout<< "Canceled"<<endl;
  }else{
    cout << "You have choosen "<< B <<" beer's on the wall!"<<endl;
    cout << '\n';
    beer(B);
    cout << '\n';
  }
  return 0;
}
