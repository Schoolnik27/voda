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
    cin >> d;////

    // ���������
    g = 9.8;
    V = 1.0; // �������������� �������� ������, �/�
    ny = 1e-6;
    Hc = 5;

    

    // �����
    cout << "����� Q: " << Q << endl;
    cout << "����� H: " << H << endl;

    return 0;
}
