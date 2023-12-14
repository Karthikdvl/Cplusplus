#include <iostream>

using namespace std;

int main() {
  string str;
  cout << "Enter a string: ";
  getline(cin, str);

  int vowels = 0, consonants = 0, digits = 0, spaces = 0;

  for (char c : str) {
    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
      vowels++;
    } else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
      consonants++;
    } else if (c >= '0' && c <= '9') {
      digits++;
    } else if (c == ' ') {
      spaces++;
    }
  }

  cout << "Number of vowels: " << vowels << endl;
  cout << "Number of consonants: " << consonants << endl;
  cout << "Number of digits: " << digits << endl;
  cout << "Number of spaces: " << spaces << endl;

  return 0;
}
