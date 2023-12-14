#include <iostream>

class MAT {
private:
    double data[2][2];

public:
    MAT(double a, double b, double c, double d) {
        data[0][0] = a;
        data[0][1] = b;
        data[1][0] = c;
        data[1][1] = d;
    }

    MAT operator+(const MAT& other) {
        MAT result(0, 0, 0, 0);
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    MAT operator-(const MAT& other) {
        MAT result(0, 0, 0, 0);
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    MAT transpose() {
        MAT result(0, 0, 0, 0);
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.data[i][j] = data[j][i];
            }
        }
        return result;
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    MAT mat1(1, 2, 3, 4);
    MAT mat2(5, 6, 7, 8);

    MAT sum = mat1 + mat2;
    std::cout << "Addition:" << std::endl;
    sum.display();

    MAT diff = mat1 - mat2;
    std::cout << "Subtraction:" << std::endl;
    diff.display();

    MAT transposed = mat1.transpose();
    std::cout << "Transpose:" << std::endl;
    transposed.display();

    return 0;
}

