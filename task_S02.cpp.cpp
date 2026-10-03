#include <iostream>
using namespace std;

int main() {
    int a = 8;
    int b = 3;

    cout << "a = " << a << ", b = " << b << endl;

    cout << "1.Celochislennoe delenie:" << endl;
    cout << "a / b = " << a / b << " (8 / 3 = 2, drobnaya chast otbroshena)" << endl;

    cout << "2. Ostatok ot deleniya:" << endl;
    cout << "a % b = " << a % b << " (8 % 3 = 2, ostatok 2)" << endl;

    int c = -8;
    cout << "3.Otricatelnye chisla: c = " << c << ", b = " << b << endl;
    cout << "c % b = " << c % b << " (znak ostatka = znak delimogo)" << endl;

    int n = 42;
    cout << "4. Proverka chetnosti chisla " << n << ":" << endl;
    if (n % 2 == 0)
        cout << n << " - chetnoe" << endl;
    else
        cout << n << " - nechetnoe" << endl;

    int kolSeconds = 5000;
    int hours   = kolSeconds / 3600;
    int minutes = (kolSeconds % 3600) / 60;
    int seconds = kolSeconds % 60;

    cout << "5. Razbienie " << kolSeconds << " sekund:" << endl;
    cout << hours << " ch " << minutes << " min " << seconds << " s" << endl;

    return 0;
}
