#include <iostream>
#include <cstring>
#include <clocale>
using namespace std;

int main() {
    setlocale(0, "Russian");

    char str[256];
    cout << "¬ведите строку: ";
    cin.getline(str, 256);

    int len = strlen(str);

    char* ptr = str;

    for (int i = 0; i < len; i++) {
        *(ptr + i) = *(ptr + i) + 1;
    }

    cout << "–езультат: " << str << endl;

    return 0;
}

