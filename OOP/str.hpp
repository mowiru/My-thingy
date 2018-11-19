class str {
private:
  char* value;
  int _length;

public:
  str();
  str(const char* val);
  str(char* val);

  const char* c();
  int length();
};
