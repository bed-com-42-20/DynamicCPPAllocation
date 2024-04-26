#include <iostream>
#include <string>

using namespace std;

int main() {
    int* pInt = new int;
    string* pString = new string;

    cout << "Enter an integer: ";
    cin >> *pInt;

    cout << "Enter a string: ";
    cin >> *pString;

    cout << "Integer: " << *pInt << "\n";
    cout << "String: " << *pString << "\n";

    delete pInt;
    delete pString;

    return 0;
}
