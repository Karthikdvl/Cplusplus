#include <iostream>
#include <string>

int main() {
    std::string String = "karthik";
    
    std::string* Pointer = &String;
    
    std::cout << "Value of the string: " << *Pointer << std::endl;
    
    return 0;
}

