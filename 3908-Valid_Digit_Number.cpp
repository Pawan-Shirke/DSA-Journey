#include <iostream>
using namespace std;

bool validDigit(int n, int x) {
    int temp = n;

    while (temp >= 10) {
        temp = temp / 10;
    }

    if (temp == x) {
        return false;
    }

    while (n > 0) {
        int rem = n % 10;

        if (x == rem) {
            return true;
        }

        n = n / 10;
    }

    return false;
}

int main() {
    int n, x;

    cin >> n >> x;

    cout << validDigit(n, x);

    return 0;
}