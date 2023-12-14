#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return (sum == num && num != 1);
}

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Perfect numbers up to " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

