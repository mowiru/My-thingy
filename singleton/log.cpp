#include <iostream>
#include <string.h>
#include <iomanip>
#include <fstream>
#include "log.hpp"

#include <ctime>

using namespace std;

void FileLog::i(string msg) {
  this->write("   info",msg);
}
void FileLog::i(string msg, string part2) {
  this->write("   info", msg + part2);
}
void FileLog::a(string msg) {
  this->write("archive",msg);
}
void FileLog::w(string msg) {
  this->write("warning",msg);
}
void FileLog::e(string msg) {
  this->write("  error",msg);
}
/*void FileLog::START(string msg) {
  this->write("START",msg);
}
void FileLog::END(string msg) {
  this->write("END",msg);
}*/


//-----------------------------

FileLog::FileLog() { //Constructor
  this->fs.open("./data.log", ofstream::out | ofstream::app);
  this->write("Start", " ");
}

void addNow(ostream& s) {
  time_t t = time(NULL);
  tm* timePtr = localtime(&t);

  s << setfill('0') << setw(4) << (timePtr->tm_year)+1900;
  s << setw(2) <<"/"<<(timePtr->tm_mon)+1 << "/" <<  (timePtr->tm_mday);
  s << setw(1) << " " << setw(2) << (timePtr->tm_hour) << ":";
  s << (timePtr->tm_min) << ":" << (timePtr->tm_sec) << setw(0) << setfill(' ');
}

void writeLogLine(ostream& s, string type, string msg) {
  addNow(s);
  s <<" | " << type << " | " << msg << endl;
}

void FileLog::write(string type, string msg) {

  writeLogLine(cout, type, msg);
  writeLogLine(this->fs, type, msg);

  time_t t = time(NULL);
  tm* timePtr = localtime(&t);
}

FileLog::~FileLog() { //Destructor
  this->write("END", "");
  //setw(40) << setfill('_') << endl;
  this->fs.close();
}
