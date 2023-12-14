#include <iostream>
using namespace std;

class Person {
public:
    virtual void work()=0;
};

class Employee : public Person {
public:
    void work() override {
        std::cout << "Employee is working" << std::endl;
    }
};

class Manager : public Person {
public:
    void work() override {
        std::cout << "Manager is managing " << std::endl;
    }
};

int main() {
    Person *p;
    Employee e;
    p = &e;
	p->work();
  	Manager m;
  	p = &m;
  	p->work(); 

    return 0;
}

