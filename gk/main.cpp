#include <iostream>

#define APP "greater_lesser"

using namespace std;

/**
 * Project: greater_lesser
 * Creator: ruedel
 * Creation Date: Do 22. Nov 14:03:55 CET 2018
 */
int main(int argc, char* argv[]) {

  game myGame;
  ui myUi;

  myGame.setDifficulty(myUi.selectDifficulty); //Ein Auswahl menü für einfach(HP:12), normal(HP:8), schwer(HP:5)

  myGame.generateNumber(); 

  do {
    cout << myGame.hint << endl; //Hint zeigt an N < oder > guess und startet mit "1 < N < 100"

    int guess = myUi.numberInput("Rate mal: ");

    if(myGame.guessCorrect(guess)) {
      cout << "You win" << endl;
      return 0;
    }
  } while (myGame.live > 0);

  cout << "You lose" << endl;

  return 0;
}
