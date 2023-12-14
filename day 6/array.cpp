#include <iostream>
#include <algorithm>

void sortArray(int arr[], int size) {
    std::sort(arr, arr + size);
}

void sortArray(double arr[], int size) {
    std::sort(arr, arr + size);
}

int main() {
    int intArr[] = {7, 3, 1, 5, 2};
    double doubleArr[] = {3.14, 1.618, 2.718, 1.0, 0.5};
    int intArrSize = sizeof(intArr) / sizeof(intArr[0]);
    int doubleArrSize = sizeof(doubleArr) / sizeof(doubleArr[0]);

    sortArray(intArr, intArrSize);

    sortArray(doubleArr, doubleArrSize);

    std::cout << "Sorted Integer Array: ";
    for (int i = 0; i < intArrSize; ++i) {
        std::cout << intArr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Sorted Double Array: ";
    for (int i = 0; i < doubleArrSize; ++i) {
        std::cout << doubleArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

