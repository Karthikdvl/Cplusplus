#include <iostream>

int main() {
    const int Size = 5;

    float floatArray[Size] = {1.1, 2.2, 3.3, 4.4, 5.5};

    float* Pointer = floatArray;
    std::cout << "Values of the array: ";
    for (int i = 0; i < Size; i++) {
        std::cout << *Pointer << " "; 
    	Pointer++; 
    }

    std::cout << std::endl;

    return 0;
}

