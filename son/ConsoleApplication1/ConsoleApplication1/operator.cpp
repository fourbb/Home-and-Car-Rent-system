
#include <string>
#include <iostream>

using namespace std;

OperatorOver OperatorOver::operator-() const {
    char* b = new char[strlen(str) + 1];
    strcpy(b, str);
    for (size_t i = 0; i < strlen(b); i++)
        b[i] = std::tolower(b[i]);
    OperatorOver temp{ b };
    delete[] b;
    return temp;
}

OperatorOver OperatorOver::operator+(const OperatorOver &a) const {
    char* tam = new char[strlen(str) + strlen(a.str) + 1];
    strcpy(tam, str);
    strcat(tam, a.str);
    OperatorOver temp{ tam };
    delete[] tam;
    return temp;
}
bool OperatorOver::operator==(const OperatorOver& a) const {
    return (strcmp(str, a.str) == 0);
}









