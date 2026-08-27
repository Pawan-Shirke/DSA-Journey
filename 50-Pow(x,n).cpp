#include <iostream>
using namespace std;

double myPow(double x, int n) {
    long long power = n;
    double res = 1;

    if (power < 0) {
        x = 1 / x;
        power = -power;
    }

    while (power > 0) {
        if (power % 2 == 1) {
            res *= x;
        }

        x *= x;
        power /= 2;
    }

    return res;
}

int main() {
    double x;
    int n;

    cin >> x >> n;

    cout << myPow(x, n);

    return 0;
}