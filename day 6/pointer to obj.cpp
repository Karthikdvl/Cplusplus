#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    Person(const std::string& n, int a) : name(n), age(a) {}
};

int main() {
    Person* Pointer = new Person("karthik", 20);

    std::cout << "Name: " << Pointer->name << std::endl;
    std::cout << "Age: " << Pointer->age << std::endl;


    delete Pointer;

    return 0;
}

