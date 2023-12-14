#include <iostream>

class MyClass; // Forward declaration

void friendFunction(MyClass obj); // Forward declaration

class MyClass {
private:
    int privateData;

public:
    MyClass(int data) : privateData(data) {}

    // Declare a friend function within the class
    friend void friendFunction(MyClass obj);

    void displayPrivateData() {
        std::cout << "Private Data: " << privateData << std::endl;
    }
};

// Define the friend function outside of the class
void friendFunction(MyClass obj) {
    // The friend function can access private data of MyClass
    std::cout << "Friend Function: " << obj.privateData << std::endl;
}

int main() {
    MyClass myObj(42);
    myObj.displayPrivateData(); // Access via a member function

    friendFunction(myObj); // Access private data via the friend function

    return 0;
}

