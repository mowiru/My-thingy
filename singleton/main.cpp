#include <iostream>
#include <string.h>
#include <iomanip>
#include "log.hpp"


#define APP "singleton_test"

using namespace std;

/**
 * Project: singleton_test
 * Creator: ruedel
 * Creation Date: Fr 30. Nov 14:19:43 CET 2018
 */
int main(int argc, char* argv[]) {

  /*
  ifstream inputFileBla("./MeineDatenDatei.json");
  string ErsteZeile;
  inputFileBla >> ErsteZeile;*/

  FileLog Log;

  //Log.START(" ");
  Log.i("New Projekt: ", APP);
  Log.i("I'm a test.");
  Log.a("Potato.");
  Log.w("This is a Test.");
  Log.e("Test has no error!");
  //Log.END(" ");

  //cout << setw(40) << setfill('_') << endl;

  return 0;
}
