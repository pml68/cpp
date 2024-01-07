#include <ctime>
#include <iomanip>
#include <iostream>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {

  double balance = 0;
  int choice = 0;

  for (;;) {
    std::cout << "Choose: ";
    std::cin >> choice;
    std::cout << std::endl;

    switch (choice) {
    case 1:
      showBalance(balance);
      break;
    case 2:
      balance += deposit();
      std::cout << "Your new balance is $" << std::setprecision(2) << std::fixed
                << balance << std::endl;
      break;
    case 3:
      balance -= withdraw(balance);
      std::cout << "Your new balance is $" << std::setprecision(2) << std::fixed
                << balance << std::endl;
      break;
    case 4:
      return 0;
    default:
      return 1;
    }
  }

  return 0;
}

void showBalance(double balance) {
  std::cout << "Your current balance is $" << std::setprecision(2) << std::fixed
            << balance << std::endl;
}

double deposit() {
  double amount = 0;

  std::cout << "Enter the amount to be deposited: ";
  std::cin >> amount;

  return amount;
}

double withdraw(double balance) {
  double amount = 0;

  std::cout << "Enter the amount to be deposited: ";
  std::cin >> amount;

  if (amount > balance) {
    std::cout << "You don't even have that much my nigga" << std::endl;
    return 0;
  } else {
    return amount;
  }
}
