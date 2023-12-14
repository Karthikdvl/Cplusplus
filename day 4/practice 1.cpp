#include <iostream>

using namespace std;

int main() {
    int size, position;
    cout << "enter  size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "array size must be greater than 0." << endl;
        return 1;
    }
    int arr[size];
    cout << "enter elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "enter the position of the element to delete (0-index): ";
    cin >> position;

    if (position < 0 || position >= size) {
        cout << "invalid position. it should be within the range [0, " << size - 1 << "]." << endl;
        return 1;
    }
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "array after deleting element at position " << position << ":" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

