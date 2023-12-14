#include <iostream>

using namespace std;

int reverse_number(int num) {
  int reversed_num = 0;
  while (num > 0) {
    int remainder = num % 10;
    reversed_num = reversed_num * 10 + remainder;
    num /= 10;
  }
  return reversed_num;
}

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  cout << "Reversed number: " << reverse_number(num) << endl;

  return 0;
}
