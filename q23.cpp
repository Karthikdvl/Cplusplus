#include <iostream>

using namespace std;

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  bool is_prime = true;
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime) {
    cout << "Prime" << endl;
  } else {
    cout << "Not Prime" << endl;
  }

  return 0;
}
