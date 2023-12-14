#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter the marks of the student: ";
    cin >> marks;

    char grade;
    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 40) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Grade: " << grade << endl;

    return 0;
}

