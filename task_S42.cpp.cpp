#include <iostream>
#include <clocale>
using namespace std;

void sort(int arr[]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    setlocale(0, "Russian");

    int a[10] = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
    cout << "До сортировки: ";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    sort(a);

    cout << "После сортировки: ";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
