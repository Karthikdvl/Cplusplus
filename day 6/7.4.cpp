#include <iostream>
#include <cstring>

class String {
private:
    char* str;

public:
    String(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    friend bool operator==(const String& s1, const String& s2);

    friend bool operator!=(const String& s1, const String& s2);

    friend bool operator<(const String& s1, const String& s2);

    friend bool operator>(const String& s1, const String& s2);

    void display() const {
        std::cout << str;
    }
};

bool operator==(const String& s1, const String& s2) {
    return strcmp(s1.str, s2.str) == 0;
}

bool operator!=(const String& s1, const String& s2) {
    return !(s1 == s2);
}

bool operator<(const String& s1, const String& s2) {
    return strcmp(s1.str, s2.str) < 0;
}

bool operator>(const String& s1, const String& s2) {
    return strcmp(s1.str, s2.str) > 0;
}

int main() {
    String str1("Hello");
    String str2("World");
    String str3("Hello");

    std::cout << "str1: ";
    str1.display();
    std::cout << std::endl;

    std::cout << "str2: ";
    str2.display();
    std::cout << std::endl;

    std::cout << "str3: ";
    str3.display();
    std::cout << std::endl;

    if (str1 == str2)
        std::cout << "str1 is equal to str2." << std::endl;
    else
        std::cout << "str1 is not equal to str2." << std::endl;

    if (str1 == str3)
        std::cout << "str1 is equal to str3." << std::endl;
    else
        std::cout << "str1 is not equal to str3." << std::endl;

    if (str1 < str2)
        std::cout << "str1 is less than str2." << std::endl;
    else
        std::cout << "str1 is not less than str2." << std::endl;

    if (str2 > str3)
        std::cout << "str2 is greater than str3." << std::endl;
    else
        std::cout << "str2 is not greater than str3." << std::endl;

    return 0;
}

