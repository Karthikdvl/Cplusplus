#include <iostream>

int main() {
    const char charArray[] = "karthik";
    const int Size = sizeof(charArray) - 1; 

    const char* Pointer = charArray;

    std::cout << "Values of the character array: ";
    for (int i = 0; i < Size; i++) {
        std::cout << *Pointer; 
        Pointer++;
    }

    std::cout << std::endl;

    return 0;
}

