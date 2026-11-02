#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(0, "Russian");

    const char* digits[10] = {
        "ноль", "один", "два", "три", "четыре",
        "пять", "шесть", "семь", "восемь", "девять"
    };

    int num;
    cout << "Введите цифру (0-9): ";
    cin >> num;

    if (num < 0 || num > 9) {
        cout << "Ошибка: нужно ввести число от 0 до 9!" << endl;
    } else {
        cout << "Название: " << digits[num] << endl;
    }

    return 0;
}
