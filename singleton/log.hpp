#include <string.h>

#include <fstream>

using namespace std;

class FileLog {
private:

  ofstream fs;

  void write(string type, string msg);


public:
  FileLog();
  ~FileLog();

  //void START(string msg);
  void i(string msg);
  void i(string msg, string part2);
  void a(string msg);
  void w(string msg);
  void e(string msg);
  //void END(string msg);
};
