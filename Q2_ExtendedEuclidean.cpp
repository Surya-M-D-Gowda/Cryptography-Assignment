#include <iostream>
using namespace std;

int extendedEuclidean(int a, int b, int &x, int &y) {

    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }

    int x1, y1;
    int gcd = extendedEuclidean(b % a, a, x1, y1);

    x = y1 - (b / a) * x1;
    y = x1;

    return gcd;
}

int main() {
    int a;
    int m;
    int x, y;

    cout << "Enter modulus: ";
    cin >> m;
    cout << "Enter number: ";
    cin >> a;

    int gcd = extendedEuclidean(a, m, x, y);

    if (gcd == 1) {
        int modularInverse = (x + m) % m;
        cout << "Multiplicative Inverse of " << a << " mod " << m << " = " << modularInverse << endl;
    } else {
        cout << "Inverse does not exist" << endl;
    }

    return 0;
}