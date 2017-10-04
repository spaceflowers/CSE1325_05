#include <iostream>
#include <random>

using namespace std;

int main() {
    int num;        // The number to be guessed
    int guess = 0;  // The user's guess
    string text;    // Temp for holding user's input

    srand ( time(NULL) );
    num = rand() % 100 + 1;

    while (num != guess) {
      cout << "What is your guess (0 to 100): ";
      getline(cin, text);
      guess = atoi(text.c_str());
      if (guess < 1 || guess > 100) cerr << "Out of range!" << endl;
      else if (guess > num) cout << "Too high!" << endl;
      else if (guess < num) cout << "Too low!" << endl;
      else cout << "WINNER!" << endl;
    }
}
