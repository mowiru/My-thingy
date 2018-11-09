#include <iostream>
#include <string.h>

#include "my_function.h"

using namespace std;

void dataOutput(const char* label, int counter, const char* value) {
  cout << label << endl;
  cout << '\n';
  cout << counter << ". " << value << endl;
  cout << '\n';
}

void categorie(){
  cout << "What Data would you like to view?" << endl;
  cout << "1. Firstname. " << endl;
  cout << "2. Lastname. " << endl;
  cout << "3. Age. " << endl;
  cout << "4. City. " << endl;
  cout << "5. All Data. " << endl;
}

void menu(){
  cout << '\n' << endl;
  cout << "1. View Data." << endl;
  cout << "2. Input Data. " << endl;
  cout << "What would you like to do?" <<endl;
  cout << "Choose a given number: ";
}

char* ui::readLine(){
  return ui::readLine("");
}

char* ui:: readLine(int& length){
  return ui::readLine("", length);
}

char* ui:: readLine(const char* msg){
  int length;
  return ui::readLine(msg, length);
}

char* ui::readLine(const char* msg, int& length){

  int size = 1; //cout << "Starten mit size = 1\n";
  char* result;
  result = (char*) calloc(size, sizeof(char));//  cout << "Starten mit result zeiger auf string länge 1\n";
  char c = '\0'; //cout << "Starten mit c = \\0\n";
  *result = c; //cout << "Starten mit *result = c aka \\0\n";

  cout << msg;

  while (cin.get(c) && c != '\n'){
    ///cout << "Setzen größe von result auf size + 1 aka " << size + 1 << "\n";
    result = (char*) realloc(result, (size + 1) * sizeof(char));
    //cout << "Setzen result[" << size - 1 << "] = " << c << "\n";
    *(result + size -1 ) = c;
    //cout << "Setzen result[" << size << "] = \\0\n";
    *(result + size) = '\0';
    size++;
    //cout << "Size ist nun " << size << "\n";
  }
  length = size -1;
  return result;
}

float ui::decimalInput(){
  return ui::decimalInput("");
}

float ui::decimalInput(const char* msg){
  bool c;
  return ui::decimalInput(msg, c);
}

float ui::decimalInput(bool& cancel){
  return ui::decimalInput("", cancel);
}

float ui::decimalInput(const char* msg, bool& cancel){
  //Benutzer Eingabe
  char* input;
  cancel = false;
  float result = 0;
  int length;
  int divi = 1, cp = 0, ck = 0;
  char lastChar = '\0';
  char realLastChar = '\0';
  bool success = false;
  while(!success){
    result = 0;
    success = true;
    input = ui::readLine(msg, length);
    divi = 1;
    cp = 0;
    ck = 0;
    lastChar = '\0';
    realLastChar = '\0';
    if(strcmp(input, "cancel") == 0){
      cancel = true;
      return 0;
    }
    //Durchlauf aller eigegebenen Buchstaben
    for(int i = 0; *input != '\0'; i++) {
      char c = *input + 1; //c ist der aktuelle Character1

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

int ui::numberInput(){
  return ui::numberInput("");
}

int ui::numberInput(const char* msg){
  bool c;
  return ui::numberInput(msg, c);
}

int ui::numberInput(bool& cancel){
  return ui::numberInput("", cancel);
}

int ui::numberInput(const char* msg, bool& cancel){
  //Benuzer Eingabe
  char* input;
  cancel = false;
  int result = 0, length;
  bool success = false;
  while(!success){
    result = 0;
    success = true;
    input = readLine(msg, length);
    if(strcmp(input, "cancel") == 0){
      cancel = true;
      return 0;
    }
    //Durchlauf aller eigegebenen Buchstaben
    for(int i = 0; i < length; i++) {
      char c = *(input + i); //c ist der aktuelle Character1

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
