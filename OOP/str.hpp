#include <iostream>

using namespace std;

class str {
private:
  char* value;
  int _length;

public:
  void ChangeValue();

  str();
  str(const char* val);
  str(char* val);

  ~str();

  const char* c();

  int length(); //Getter
  int length(int newLength); //Setter
  // wenn länger leerzeichen : wenn kürzer abscheniden

  str* add(str& second);
  str* add(str* second);
  str* add(char* second);
  str* add(const char* second);

  str* padRight(int number);
  str* padRight(int number, char space);

  str* padLeft(int number);
  str* padLeft(int number, char space);

  str* center(int number);
  str* center(int number, char space);
  str* center(int number, char space, char end);

  bool equals(str* given);
  bool equals(str& given);
  bool equals(char* given);
  bool equals(const char* given);

  str* substr(int a, int b);

  void operator =(str& newValue);
  //void operator =(char* newValue);
  void operator =(const char* newValue);

  str& operator +(str& Value);
  //str& operator +(str* newValue);
};

ostream& operator<<(ostream&s, str& v);
