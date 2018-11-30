#include <string.h>

using namespace std;

class game{
  private:
    int number;

  public:
    string hint;
    int live;

    void setDifficulty(int stage);

    void generateNumber();

    bool guessCorrect(int guess);

    game();

};

class ui{

  public:

    int selectDifficulty();

    int numberInput(const char* msg, int min = 1, int max = 100);

};
