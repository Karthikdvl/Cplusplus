#include <iostream>
using namespace std;

int main() {
    int days, years, weeks, remainingDays;
    cout << "Enter the number of days: ";
    cin >> days;
    years = days / 365;
    weeks = (days % 365) / 7;
    remainingDays = days % 365 % 7;
    cout << days << " days is equivalent to " << years << " years, " << weeks << " weeks, and " << remainingDays << " days." << endl;
    return 0;
}

