#include <string.h>

using namespace std;

class FileLog {
private:
  void write(string type, string msg);

public:
  FileLog();
  ~FileLog();

  void i(string msg);
  void i(string msg, string part2);
  void a(string msg);
  void w(string msg);
  void e(string msg);
};
