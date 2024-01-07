#include <ctime>
#include <iostream>

char getUserChoice();
char getComputerChoice();
void chooseWinner(char player, char computer);

using std::cout, std::cin;

int main() {

  char player;
  char computer;

  player = getUserChoice();
  computer = getComputerChoice();

  chooseWinner(player, computer);

  return 0;
}

char getUserChoice() {
  char player;

  cout << "Nigga what you say? ";
  cin >> player;
  cout << "Good to know\n";

  return player;
}

char getComputerChoice() {
  char computer;

  srand(time(NULL));
  int num = (rand() % 3) + 1;

  switch (num) {
  case 1:
    computer = 'r';
    break;
  case 2:
    computer = 'p';
    break;
  case 3:
    computer = 's';
    break;
  default:
    break;
  }

  return computer;
}

void chooseWinner(char player, char computer) {
  if (player == computer) {
    cout << "Ya'll are both stupid niggers\n";
  } else {
    if (player == 'r') {
      switch (computer) {
      case 'p':
        cout << "You lost\n";
        break;
      case 's':
        cout << "You won\n";
        break;
      }
    } else if (player == 'p') {
      switch (computer) {
      case 'r':
        cout << "You won\n";
        break;
      case 's':
        cout << "You lost\n";
        break;
      }
    } else if (player == 's') {
      switch (computer) {
      case 'r':
        cout << "You won\n";
        break;
      case 'p':
        cout << "You lost\n";
        break;
      }
    } else {
      cout << "Nigga that ain't even possible";
    }
  }
}
