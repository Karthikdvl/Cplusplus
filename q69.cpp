#include <iostream>

using namespace std;

int main() {
  int octal_num;
  cout << "Enter an octal number: ";
  cin >> octal_num;

  int decimal_num = 0;
  int power = 1;
  while (octal_num > 0) {
    int remainder = octal_num % 10;
    decimal_num += remainder * power;
    octal_num /= 10;
    power *= 8;
  }

  int binary_num = 0;
  power = 1;
  while (decimal_num > 0) {
    int remainder = decimal_num % 2;
    binary_num += remainder * power;
    decimal_num /= 2;
    power *= 10;
  }

  cout << "Binary equivalent: " << binary_num << endl;

  return 0;
}
