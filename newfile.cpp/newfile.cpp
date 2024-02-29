#include <iostream>
using namespace std;
int main() {
    int height;

    cout << "Введіть висоту піраміди: ";
    cin >> height;

    for (int i = 0; i < height; ++i) {
        // цикл для пробілів
        for (int j = 0; j < height - i; ++j) {
            cout << " ";
        }

        // цикл для чисел
        for (int j = 0; j <= i; j++) {
            cout << i;
        }

        // цикл для зірочок
        for (int l = 0; l < i; ++l) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
