#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    double Q, W, t, S, n, H, Hr, h, Hc, Re, L, d, V, g, ny, ld;

    // Ввод данных
    cout << "Введите t: ";
    cin >> t;
    cout << "Введите S: ";
    cin >> S;
    cout << "Введите n: ";
    cin >> n;
    cout << "Введите Hr: ";
    cin >> Hr;
    cout << "Введите L: ";
    cin >> L;
    cout << "Введите d: ";
    cin >> d;////

    // Константы
    g = 9.8;
    V = 1.0; // Предполагаемая скорость потока, м/с
    ny = 1e-6;
    Hc = 5;

    

    // Вывод
    cout << "Вывод Q: " << Q << endl;
    cout << "Вывод H: " << H << endl;

    return 0;
}
