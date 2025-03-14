#include <iostream>
#include <string>
using namespace std;

int main() {
    int intVar = 42;
    float f = 3.14f;
    double d= 2.71828;
    long double ld=1.2234534675674L;
    char charVar = 'A';
    string stringVar = "Hello, World!";
    bool boolVar = true;

    cout << "Integer: " << intVar << endl;
    cout << "Float: " << f << endl;
    cout << "Double: " << d << endl;
    cout << "long Double: " << ld << endl;

    cout << "Character: " << charVar << endl;
    cout << "String: " << stringVar << endl;
    cout << "Boolean: " << boolVar << endl;

    return 0;
}
