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

    void Put(float V) { Balance += V; }

    void Take(float V) {
        if (V > Balance) {
            cout << "Недостаточно средств!" << endl;
        } else {
            Balance -= V;
        }
    }

    int getNumber() { return Number; }
    float getBalance() { return Balance; }

    CreditCard& operator+(CreditCard& other) {
        if (Number == other.Number) {
            cout << "Ошибка: это одна и та же карта (№" << Number
                 << "), операция не проводится." << endl;
            return *this;
        }

        Balance += other.Balance;
        other.Balance = 0;
        return *this;
    }

    void Show() {
        cout << "Карта №" << Number << ", баланс: " << Balance << " р." << endl;
    }
};

int main() {
    setlocale(0, "Russian");

    CreditCard c1(1234, 100);
    CreditCard c2(5678, 50);

    cout << "--- Исходно ---" << endl;
    c1.Show();
    c2.Show();

    cout << "\n--- Выполняем c1 + c2 ---" << endl;
    c1 + c2;

    cout << "После операции:" << endl;
    c1.Show();
    c2.Show();

    return 0;
}


