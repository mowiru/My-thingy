#include <iostream>
#include <string.h>

using namespace std;

/*
userinput(const char* msg, bool& cancel){
char input [50];
cout << msg;
cancel = false;
char n; //name
char ln; //lastname
int a; //age
char c; //city
int counter;

cin >> n;
cin >> ln;
cin >> a;
cin >> c;

}
*/

char* readline(){
  int size = 1; cout << "Starten mit size = 1\n";
  char* result;
  result = (char*) calloc(size, sizeof(char));  cout << "Starten mit result zeiger auf string länge 1\n";
  char c = '\0'; cout << "Starten mit c = \\0\n";
  *result = c; cout << "Starten mit *result = c aka \\0\n";

  while (cin.get(c) && c != '\n'){
    cout << "Setzen größe von result auf size + 1 aka " << size + 1 << "\n";
    result = (char*) realloc(result, (size + 1) * sizeof(char));
    cout << "Setzen result[" << size - 1 << "] = " << c << "\n";
    *(result + size -1 ) = c;
    cout << "Setzen result[" << size << "] = \\0\n";
    *(result + size) = '\0';
    size++;
    cout << "Size ist nun " << size << "\n";
  }

  return result;
}


int main(){

  char response[1];
  bool run = true;
  char strl;
  char fn[100]; //firstname
  char ln[100]; //lastname
  int a; //age
  char c[100]; //city
  int counter = 0;
  readline(fn);
  //cin.get


  while(run){

    cout << "1. View Data." << endl;
    cout << "2. Input Data. " << endl;
    cout << "What would you like to do?" <<endl;
    cout << "Choose a given number: ";
    cin >> response;
    cout << '\n';
    if (response[0] == 'c'){
      run = false;
    }
    if (response[0] == '1'){
      char choice[2];
      if (counter == 0){
        cout << "No Data has been entered jet." << endl;
        cout << '\n';
      }else if(counter > 0){
        cout << "What Data would you like to view?" << endl;
        cout << "1. Firstname. " << endl;
        cout << "2. Lastname. " << endl;
        cout << "3. Age. " << endl;
        cout << "4. City. " << endl;
        cout << "5. All Data. " << endl;
        cin >> choice;

        if (choice[0] == '1'){
          cout << "You have choosen the categorie Firstname." << endl;
          cout << '\n';
          cout << counter << ". " << fn << endl;
          cout << '\n';
        }else if (choice[0] == '2'){
          cout << "You have choosen the categorie Lastname." << endl;
          cout << '\n';
          cout << counter << ". " << ln << endl;
          cout << '\n';
        }else if (choice[0] == '3'){
          cout << "You have choosen the categorie Age." << endl;
          cout << '\n';
          cout << counter << ". " << a << endl;
          cout << '\n';
        }else if (choice[0] == '4'){
          cout << "You have choosen the categorie City." << endl;
          cout << '\n';
          cout << counter << ". " << c << endl;
          cout << '\n';
        }else if (choice[0] == '5'){
          cout << "You have choosen the categorie All Data." << endl;
          cout << '\n';
          cout << counter << ". " << fn << " " << ln << ", " << a << ", " << c << ";" << endl;
          cout << '\n';
        }else if (choice[0] != 1, choice[0] != 2, choice[0] != 3, choice[0] != 4, choice[0] != 5){
          cout << "Not a valid option!" << endl;
        }
      }
    }else if(response[0] == '2'){
      cout << "Input Firstname, Lastname, Age and City:  ";
      cin >> fn >> ln >> a >> c;
      counter++;
      cout << '\n';
      cout << counter << ". " << fn << " " << ln << " is " << a << " year's old. " << endl;
      cout << fn << " " << ln << " lives in " << c << "." << endl;
      cout << '\n';
    }else if (response[0] != 1 || response[0] != 2){
      cout << '\n';
      cout << "Not a give number. Choose 1 or 2!" << endl;
      cout << '\n';
    }
  }
  return 0;
}
