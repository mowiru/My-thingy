#include <iostream>
#include <string.h>

using namespace std;

float decimalInput(const char* msg, bool& cancel){
  //Benutzer Eingabe
  char input[100];
  cout << msg;
  cancel = false;
  float result = 0;
  int divi = 1, cp = 0, ck = 0;
  char lastChar = '\0';
  char realLastChar = '\0';
  bool success = false;
  while(!success){
    result = 0;
    success = true;
    divi = 1;
    cp = 0;
    ck = 0;
    lastChar = '\0';
    realLastChar = '\0';
    cin >> input;
    if(strcmp(input, "cancel") == 0){
      cancel = true;
      return 0;
    }
    //Durchlauf aller eigegebenen Buchstaben
    for(int i = 0; input[i] != '\0'; i++) {
      char c = input[i]; //c ist der aktuelle Character1

      switch(c){
        case '.':
            cp++;
            divi = 1;
            if(c != realLastChar){
              lastChar = c;
            }else{
              lastChar = '\0';
            }
            realLastChar = c;
          break;

        case ',':
            ck++;
            divi = 1;
            if(c != realLastChar){
              lastChar = c;
            }else{
              lastChar = '\0';
            }
            realLastChar = c;
          break;


        case '0':
            if(lastChar != '\0'){
              divi = divi * 10;
            }
            result = result * 10 + 0;
          break;

        case '1':
            if(lastChar != '\0'){
              divi = divi * 10;
            }
            result = result * 10 + 1;
          break;

        case '2':
            if(lastChar != '\0'){
              divi = divi * 10;
            }
            result = result * 10 + 2;
          break;

        case '3':
            if(lastChar != '\0'){
              divi = divi * 10;
            }
            result = result * 10 + 3;
          break;

        case '4':
            if(lastChar != '\0'){
              divi = divi * 10;
            }
            result = result * 10 + 4;
          break;

        case '5':
            if(lastChar != '\0'){
              divi = divi * 10;
            }
            result = result * 10 + 5;
          break;

        case '6':
            if(lastChar != '\0'){
              divi = divi * 10;
            }
            result = result * 10 + 6;
          break;

        case '7':
            if(lastChar != '\0'){
              divi = divi * 10;
            }
            result = result * 10 + 7;
          break;

        case '8':
            if(lastChar != '\0'){
              divi = divi * 10;
            }
            result = result * 10 + 8;
          break;

        case '9':
            if(lastChar != '\0'){
              divi = divi * 10;
            }
            result = result * 10 + 9;
          break;

        default:
          success = false;
          cout << "This is not a decimal number: " << c << endl;
          cout << '\n';
          cout << "Try again: " << endl;
          break;
      }
      if(!success)
        break;
    }
    if((cp == 0) && (ck == 0)){
      success = false;
      cout << '\n';
      cout << "This is not a decimalnumber. Try Again: " << endl;
    } else {
    if((cp > 1) && (ck > 1)) { success = false; cout<<""<<endl; }
    if((cp > 1) && (ck >= 1) && (realLastChar == '.')) { success = false; cout<<"Invalid."<<endl; }
    if((ck > 1) && (cp >= 1) && (realLastChar == ',')) { success = false; cout<<"Invalid."<<endl; }
    cout << '\n';
    cout << "Result: " << fixed << result << endl;
    cout << "Divi:  " << fixed << divi << endl;
    result /= divi;
    cout << "Number of comma: " << ck << endl;
    cout << "Number of dot's: " << cp << endl;
    }
  }
  return result;
}

int numberInput(const char* msg, bool& cancel){
  //Benuzer Eingabe
  char input[100];
  cout << msg;
  cancel = false;
  int result = 0;
  bool success = false;
  while(!success){
    result = 0;
    success = true;
    cin >> input;
    if(strcmp(input, "cancel") == 0){
      cancel = true;
      return 0;
    }
    //Durchlauf aller eigegebenen Buchstaben
    for(int i = 0; input[i] != '\0'; i++) {
      char c = input[i]; //c ist der aktuelle Character1

      switch(c){
        case '0':
            result = result * 10 + 0;
          break;

        case '1':
            result = result * 10 + 1;
          break;

        case '2':
            result = result * 10 + 2;
          break;

        case '3':
            result = result * 10 + 3;
          break;

        case '4':
            result = result * 10 + 4;
          break;

        case '5':
            result = result * 10 + 5;
          break;

        case '6':
            result = result * 10 + 6;
          break;

        case '7':
            result = result * 10 + 7;
          break;

        case '8':
            result = result * 10 + 8;
          break;

        case '9':
            result = result * 10 + 9;
          break;

        default:
          success = false;
          cout << "This is not a regular number: " << c << endl;
          cout << '\n';
          cout << "Try again. " << endl;
          break;
      }
      if(!success)
        break;
    }
  }
  return result;
}

int main(){

  char response[1];
  bool cancel = false;
  bool run = true;

  while(run) {
    //float n = numberInput("How many Bottles of beer? ", cancel);
    cout << '\n';
    cout << "Do you want to use decimal number's? (Y/N/C = cancel): ";
    cin >> response;
    cout << '\n';
    if (response[0] == 'Y' || response[0] == 'y'){

      float n = decimalInput("What decimal number would you like? ", cancel);
      cout << '\n';
      cout << fixed << n << endl;
      cout << '\n';

    }else if(response[0] == 'N' || response[0] == 'n'){

      int n = numberInput("What regular number would you like? ", cancel);
      cout << '\n';
      cout << n <<endl;
      cout << '\n';

    } else if(response[0] == 'C' || response[0] == 'c'){
      run = false;
      cout << "You have canceled the program. Bye Bye." << endl;
      cout << '\n';
    } else if (response[0] != 'Y' || response[0] != 'y', response[0] != 'N' || response[0] != 'n', response[0] != 'C' || response[0] != 'c'){
        cout << "Invalid answer. Choose Y, N or C. " << response << " is not valid!" << endl;
    }
  }
  return 0;
}
