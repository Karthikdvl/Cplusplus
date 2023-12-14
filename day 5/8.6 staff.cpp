#include <iostream>
#include <string>
struct Staff {
    std::string code;
    std::string subjectPublication;
    char grade;
    int speed;
    double typistWage;
};
int main() {
    const int DATABASE_SIZE = 3;
    Staff staffDatabase[DATABASE_SIZE] = {
        {"101", "Mathematics", 'A', 60, 20.50},
        {"102", "English", 'B', 50, 15.75},
        {"103", "Physics", 'C', 40, 19.25}
    };
    std::string enteredCode;
    std::cout << "Enter staff code: ";
    std::cin >> enteredCode;
    bool found = false;
    for (int i = 0; i < DATABASE_SIZE; ++i) {
        if (staffDatabase[i].code == enteredCode) {
		    std::cout << "----------Staff Information ------\n";
            std::cout << "Code: " << staffDatabase[i].code << "\n";
            std::cout << "Publication Subject : " << staffDatabase[i].subjectPublication << "\n";
            std::cout << "Grade: " << staffDatabase[i].grade << "\n";
            std::cout << "Speed: " << staffDatabase[i].speed << " words per minute\n";
            std::cout << "Typist Wage: $" << staffDatabase[i].typistWage << " per hour\n";
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Staff with code " << enteredCode << " not found in the database.\n";
    }

}
