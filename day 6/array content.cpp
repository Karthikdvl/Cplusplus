#include <iostream>


void printArray(const int arr[], int size) {
    std::cout << "Integer Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


void printArray(const double arr[], int size) {
    std::cout << "Double Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void printArray(const char arr[], int size) {
    std::cout << "Character Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = "Hello";

    printArray(intArray, sizeof(intArray) / sizeof(intArray[0]));
    printArray(doubleArray, sizeof(doubleArray) / sizeof(doubleArray[0]));
    printArray(charArray, sizeof(charArray) - 1); 

    return 0;
}

