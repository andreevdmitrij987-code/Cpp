#include <iostream>
#include <clocale>
using namespace std;

class CreditCard {
private:
    int Number;
    float Balance;

public:
    CreditCard(int number, float balance) {
        Number = number;
        Balance = balance;
    }
    void Put(float V) {
        Balance += V;
        cout << "Положено " << V << " р. Баланс: " << Balance << " р." << endl;
    }

    void Take(float V) {
        if (V > Balance) {
            cout << "Недостаточно средств! Баланс: " << Balance << " р." << endl;
        } else {
            Balance -= V;
            cout << "Снято " << V << " р. Баланс: " << Balance << " р." << endl;
        }
    }

    void Show() {
        cout << "Карта №" << Number << ", баланс: " << Balance << " р." << endl;
    }
};

int main() {
    setlocale(0, "Russian");
    CreditCard firstCC(1234, 50);

    cout << "--- Исходное состояние ---" << endl;
    firstCC.Show();

    cout << "\n--- Через объект ---" << endl;
    firstCC.Put(100);
    firstCC.Take(30);
    firstCC.Show();

    cout << "\n--- Через указатель (->) ---" << endl;
    CreditCard* ptr = &firstCC;
    ptr->Put(200);
    ptr->Take(50);
    ptr->Show();

    return 0;
}
