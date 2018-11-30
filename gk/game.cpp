#include <iostream>
#include <string.h>
#include "game.hpp"

using namespace std;

#define EASY 1
#define NORMAL 2
#define HARD 3

game::game(){
  this->hint = "1 < N < 100";
  this->live = 10;
}

bool RND_SEED_IS_SET = false;

int rnd(int min, int max){
  if(!RND_SEED_IS_SET) {
    srand(time(NULL));
    RND_SEED_IS_SET = true;
  }
  return min + (rand() % ((max - min)+ 1));
}

void game::setDifficulty(int stage){

  if(stage == EASY){
    this->live = 10;
  }else if(stage == NORMAL){
    this->live = 7;
  }else if(stage == HARD){
    this->live = 5;
  }
}


//Ein Auswahl menü für einfach(HP:12), normal(HP:8), schwer(HP:5)
void game::generateNumber(){
  this->number = rnd(1, 100);
}

bool game::guessCorrect(int guess){

  /* smaller
    this->hint = "Try again.";
    cout << "It's betwenn 1 and " << guess << endl;

    bigger
    this->hint = "Try again.";
    cout << "It's betwenn" << guess << " and 100" << endl;

   */


  if (this->number == guess){
    return true;
  }else{
    this->live = this->live - 1;
    if(this->number < guess){
      this->hint = "The number you are looking for is smaller than " + to_string(guess) + ".";

    } else if(this->number > guess){
      this->hint = "The number you are looking for is bigger than " + to_string(guess) + ".";

    }
    return false;
  }
}

/////////////////////////////////////////////////

int ui::selectDifficulty(){
  int result = 0;

  cout << "1. EASY has 10 Lives." << endl;
  cout << "2. NORMAL has 7 Lives." << endl;
  cout << "3. HARD has 5 Lives." << endl;

  return this->numberInput("Choose Hardness via Number: ",1,3);
}

int ui::numberInput(const char* msg, int min, int max){
  int result = 0;
  string input;

  cout << msg << endl;

  do{
    cin >> input;
    try {
      result = stoi(input);
    } catch(invalid_argument ex) {
      cout << "Invalid Input: " << input << endl;
      result = min - 1;
    }
    if ((result < min) || (result > max)) {
      cout << "Invalid Number: " << result << endl;
    }
  }while((result < min) || (result > max));
  return result;
}
