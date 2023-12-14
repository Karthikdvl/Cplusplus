#include <iostream>

using namespace std;

int count_digits(int num) {
  int count = 0;
  while (num > 0) {
    count++;
    num /= 10;
  }
  return count;
}

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  cout << "Number of digits: " << count_digits(num) << endl;

  return 0;
}
