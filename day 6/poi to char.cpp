#include <iostream>

int main() {
    char Char = 'A';

    char* Pointer = &Char;

    std::cout << "Value of the char: " << *Pointer << std::endl;

    return 0;
}

