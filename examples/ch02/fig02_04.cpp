#include <iostream>
int main(int argc, char *argv[]) {
  int number1{0};
  int number2{0};
  int sum{0};

  std::cout << "Enter first interger: ";
  std::cin >> number1;

  std::cout << "Enter first interger: ";
  std::cin >> number2;

  sum = number1 + number2;

  std::cout << " Sun is " << sum << "\n";

  return 0;
}
