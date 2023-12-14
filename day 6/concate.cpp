#include <iostream>
#include <cstring>

class StringConcatenator; 

class Concatenatable {
public:
    friend char* concatenate(const StringConcatenator& concatenator, const Concatenatable& str1, const Concatenatable& str2);
};

class StringConcatenator {
public:
    friend char* concatenate(const StringConcatenator& concatenator, const Concatenatable& str1, const Concatenatable& str2);


    friend std::string concatenate(const StringConcatenator& concatenator, const std::string& str1, const std::string& str2);
};


char* concatenate(const StringConcatenator& concatenator, const Concatenatable& str1, const Concatenatable& str2) {
    const char* cstr1 = str1.getCString();
    const char* cstr2 = str2.getCString();
    char* result = new char[strlen(cstr1) + strlen(cstr2) + 1];
    strcpy(result, cstr1);
    strcat(result, cstr2);
    return result;
}

std::string concatenate(const StringConcatenator& concatenator, const std::string& str1, const std::string& str2) {
    return str1 + str2;
}

class Concatenatable {
private:
    const char* cString;

public:
    Concatenatable(const char* str) : cString(str) {}

    const char* getCString() const {
        return cString;
    }
};

int main() {
    StringConcatenator concatenator;
    Concatenatable cstr1("Hello, ");
    Concatenatable cstr2("world!");
    std::string str1("C++ ");
    std::string str2("programming");

    char* concatenatedCStr = concatenate(concatenator, cstr1, cstr2);
    std::string concatenatedStr = concatenate(concatenator, str1, str2);

    std::cout << "Concatenated C-style string: " << concatenatedCStr << std::endl;
    std::cout << "Concatenated C++ string: " << concatenatedStr << std::endl;

    delete[] concatenatedCStr;

    return 0;
}

