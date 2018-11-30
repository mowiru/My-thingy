#include <iostream>
#include <string.h>
#include <fstream>
#include "log.hpp"

#define APP "singleton_test"

using namespace std;

/**
 * Project: singleton_test
 * Creator: ruedel
 * Creation Date: Fr 30. Nov 14:19:43 CET 2018
 */
int main(int argc, char* argv[]) {

  /*ifstream inputFileBla("./MeineDatenDatei.json");
  string ErsteZeile;
  inputFileBla >> ErsteZeile;*/

  ofstream fs;

  fs.open("./data.log", ofstream::out | ofstream::app);

  fs << "Hallo Welt" << endl;

  fs.close();

  FileLog Log;

  Log.i("Neues Project: ", APP);
  Log.i("Hallo");
  Log.a("ich");
  Log.w("bin ein");
  Log.e("Test!");

  return 0;
}
