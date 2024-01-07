#include <iostream>

using std::string, std::cout, std::cin;

int getDigits(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);

int main() {

  string cardNumber;
  int result = 0;

  cout << "Enter a credit card #: ";
  cin >> cardNumber;

  result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

  string validity;

  if (result % 10 == 0) {
    validity = "valid";
  } else {
    validity = "invalid";
  };

  cout << "\n"
       << result << "\n"
       << "The number is " << validity << "\n";

  return 0;
}

int getDigits(const int number) { return number % 10 + (number / 10 % 10); }

int sumEvenDigits(const string cardNumber) {
  int sum = 0;
  for (int i = 0; i < sizeof(cardNumber) / sizeof(cardNumber[0]) / 2; i += 2) {
    sum += getDigits((cardNumber[i] - '0') * 2);
  }
  return sum;
}

int sumOddDigits(const string cardNumber) {
  int sum = 0;
  for (int i = 1; i < sizeof(cardNumber) / sizeof(cardNumber[0]) / 2; i += 2) {
    sum += cardNumber[i] - '0';
  }
  return sum;
}
