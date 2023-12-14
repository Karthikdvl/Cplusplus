#include <iostream>
using namespace std;
void sumArrays(const int arr1[], const int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

void sumArrays(const double arr1[], const double arr2[], double result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}


void sumMatrices(const int mat1[][3], const int mat2[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}


void sumMatrices(const double mat1[][3], const double mat2[][3], double result[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int intArray1[] = {1, 2, 3};
    int intArray2[] = {4, 5, 6};
    double doubleArray1[] = {1.1, 2.2, 3.3};
    double doubleArray2[] = {4.4, 5.5, 6.6};

    int intMatrix1[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int intMatrix2[][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    double doubleMatrix1[][3] = {{1.1, 2.2, 3.3}, {4.4, 5.5, 6.6}, {7.7, 8.8, 9.9}};
    double doubleMatrix2[][3] = {{9.9, 8.8, 7.7}, {6.6, 5.5, 4.4}, {3.3, 2.2, 1.1}};

    int intResultArray[3];
    double doubleResultArray[3];
    int intResultMatrix[3][3];
    double doubleResultMatrix[3][3];

    sumArrays(intArray1, intArray2, intResultArray, 3);

    sumArrays(doubleArray1, doubleArray2, doubleResultArray, 3);

    sumMatrices(intMatrix1, intMatrix2, intResultMatrix, 3, 3);

    sumMatrices(doubleMatrix1, doubleMatrix2, doubleResultMatrix, 3, 3);

    std::cout << "Sum of Integer Array: ";
    for (int i = 0; i < 3; i++) {
        std::cout << intResultArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Sum of Double Array: ";
    for (int i = 0; i < 3; i++) {
        std::cout << doubleResultArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Sum of Integer Matrices:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << intResultMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Sum of Double Matrices:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << doubleResultMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

