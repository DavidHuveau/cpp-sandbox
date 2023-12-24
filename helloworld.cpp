#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1("Hello"), str2("world");
    char char1 = '!';
    cout << str1 << ' ' << str2 << char1 << endl;

    cout << "Size of int type in bytes: " << sizeof(double) << endl;
    cout << "Lower limit of int : " << numeric_limits<double>::min() << endl;
    cout << "Upper limit of int : " << numeric_limits<double>::max() << endl;

    return 0;
}
