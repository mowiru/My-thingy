#include <iostream>
#include <string.h>
#include "log.hpp"

using namespace std;

void FileLog::i(string msg) {this->write("   info",msg);}
void FileLog::i(string msg, string part2) {this->write("   info", msg + part2);}
void FileLog::a(string msg) {this->write("archive",msg);}
void FileLog::w(string msg) {this->write("warning",msg);}
void FileLog::e(string msg) {this->write("  error",msg);}

//-----------------------------

FileLog::FileLog() { //Constructor

}

FileLog::~FileLog() { //Destructor

}

void FileLog::write(string type, string msg) {
  cout << type << "->" << msg << endl;
  //2018/11/30 15:35:12.555 | Info | Bla
  //2018/11/30 15:35:12.555 | Archive | Bla
  //2018/11/30 15:35:12.555 | Warnung | Bla
  //2018/11/30 15:35:12.555 | error | Bla
}
