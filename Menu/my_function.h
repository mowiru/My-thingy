
//void menu();
//void categorie();

int showMenu(const char* options[], const char* title, int optionCount);

void dataOutput(const char* label, int counter, const char* value);

namespace ui {

  char* readLine();
  char* readLine(int& length);
  char* readLine(const char* msg);
  char* readLine(const char* msg, int& length);

  int numberInput();
  int numberInput(bool& cancel);
  int numberInput(const char* msg);
  int numberInput(const char* msg, bool& cancel);

  float decimalInput();
  float decimalInput(bool& cancel);
  float decimalInput(const char* msg);
  float decimalInput(const char* msg, bool& cancel);
}
