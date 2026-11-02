#include <iostream>
#include <fstream>
#include <clocale>
using namespace std;

int main() {
    setlocale(0, "Russian");

    ifstream fin("output.txt");

    if (!fin.is_open()) {
        cout << "Ошибка: не удалось открыть файл output.txt!" << endl;
        return 1;
    }

    int num;
    int n = 0;

    while (fin >> num) {
        n++;
        cout << n << ". " << num << endl;
    }

    fin.close();
    return 0;
}
