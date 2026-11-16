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
    }

    void Take(float V) {
        if (V > Balance) {
            cout << "Недостаточно средств! Баланс: " << Balance << " р." << endl;
        } else {
            Balance -= V;
        }
    }

    int getNumber() { return Number; }
    float getBalance() { return Balance; }

    void Show() {
        cout << "Карта №" << Number << ", баланс: " << Balance << " р." << endl;
    }
};

void Transfer(CreditCard& C1, CreditCard& C2, float V) {
    if (C1.getNumber() == C2.getNumber()) {
        cout << "Ошибка: это одна и та же карта (№" << C1.getNumber()
             << "), операция не проводится." << endl;
        return;
    }

    if (V > C1.getBalance()) {
        cout << "Ошибка: недостаточно средств на карте №" << C1.getNumber()
             << " (баланс: " << C1.getBalance() << " р., нужно: " << V << " р.)" << endl;
        return;
    }

    C1.Take(V);
    C2.Put(V);
    cout << "Перевод " << V << " р. с карты №" << C1.getNumber()
         << " на карту №" << C2.getNumber() << " выполнен." << endl;
}

int main() {
    setlocale(0, "Russian");

    CreditCard c1(1234, 100);
    CreditCard c2(5678, 50);
    CreditCard c3(1234, 0);

    cout << "--- Исходно ---" << endl;
    c1.Show();
    c2.Show();

    cout << "\n--- Перевод 40 р. с c1 на c2 ---" << endl;
    Transfer(c1, c2, 40);
    c1.Show();
    c2.Show();

    cout << "\n--- Попытка перевода 500 р. (не хватает) ---" << endl;
    Transfer(c1, c2, 500);

    cout << "\n--- Попытка перевода на ту же карту ---" << endl;
    Transfer(c1, c3, 10);

    return 0;
}

