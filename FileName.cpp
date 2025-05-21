#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    double Q, W, t, S, n, H, Hr, h, Hc, Re, L, d, V, g, ny, ld;

    // ���� ������
    cout << "������� t: ";
    cin >> t;
    cout << "������� S: ";
    cin >> S;
    cout << "������� n: ";
    cin >> n;
    cout << "������� Hr: ";
    cin >> Hr;
    cout << "������� L: ";
    cin >> L;
    cout << "������� d: ";
    cin >> d;

    // ���������
    g = 9.8;
    V = 1.0; // �������������� �������� ������, �/�
    ny = 1e-6;
    Hc = 5;

    // �������
    W = 0.02 * S + 0.05 * n;
    Q = W / t;

    Re = (d * V) / ny;

    if (Re < 2300) {
        ld = 64 / Re;
    }
    else {
        ld = 0.3 / pow(Re, 0.25);
    }

    h = ld * (L / d) + (V * V) / (2 * g);
    H = Hr + h + Hc;

    // �����
    cout << "����� Q: " << Q << endl;
    cout << "����� H: " << H << endl;

    return 0;
}
