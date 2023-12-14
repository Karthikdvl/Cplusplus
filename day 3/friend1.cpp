#include <iostream>

class DB; 

class DM {
private:
    int meters;
    int centimeters;

public:
    DM(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

    friend DM addDistances(DM dm, DB db);

    void display() {
        std::cout << "Distance in meters and centimeters: " << meters << "m " << centimeters << "cm" << std::endl;
    }
};

class DB {
private:
    int feet;
    int inches;

public:
    DB(int ft = 0, int in = 0) : feet(ft), inches(in) {}

    friend DM addDistances(DM dm, DB db);

    void display() {
        std::cout << "Distance in feet and inches: " << feet << "ft " << inches << "in" << std::endl;
    }
};

DM addDistances(DM dm, DB db) {

    int totalCentimeters = (dm.meters * 100 + dm.centimeters) + (db.feet * 30.48 + db.inches * 2.54);
    int newMeters = totalCentimeters / 100;
    int newCentimeters = totalCentimeters % 100;

    return DM(newMeters, newCentimeters);
}

int main() {
    DM dm1(3, 50);   
    DB db1(5, 6);   

    DM result = addDistances(dm1, db1);

    std::cout << "Result: ";
    result.display();

    return 0;
}

