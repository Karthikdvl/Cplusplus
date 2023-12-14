#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0, marks, maxMarks;

    cout << "Enter the number of subjects: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter marks for subject " << i << ": ";
        cin >> marks;
        cout << "Enter maximum marks for subject " << i << ": ";
        cin >> maxMarks;
        sum += (marks / maxMarks) * 100;
    }

    double averagePercentage = sum / n;

    cout << "Average percentage marks are: " << averagePercentage << "%" << endl;

    return 0;
}

