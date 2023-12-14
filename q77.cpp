#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0, num;

    cout << "Enter the number of values: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter value " << i << ": ";
        cin >> num;
        sum += num;
    }

    double average = sum / n;

    cout << "Arithmetic mean (average) is: " << average << endl;

    return 0;
}

