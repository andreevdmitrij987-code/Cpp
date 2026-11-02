#include <iostream>
#include <fstream>
#include <clocale>
using namespace std;

int main() {
    setlocale(0, "Russian");

    int A, B;
    cout << "¬ведите число A: ";
    cin >> A;
    cout << "¬ведите число B (B > A): ";
    cin >> B;

    if (B <= A) {
        cout << "ќшибка: B должно быть больше A!" << endl;
        return 1;
    }

    ofstream fout("output.txt");

    if (!fout.is_open()) {
        cout << "ќшибка: не удалось открыть файл!" << endl;
        return 1;
    }

    for (int i = A; i <= B; i++) {
        fout << i * 3 << endl;
    }

    fout.close();

    cout << "–езультат записан в файл output.txt" << endl;

    return 0;
}
