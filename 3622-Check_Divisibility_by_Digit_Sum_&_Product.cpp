#include <iostream>
using namespace std;

bool checkDivisibility(int n) {
    int sum = 0;
    int pro = 1;
    int rem;
    int temp = n;

    while (temp != 0) {
        rem = temp % 10;
        sum = sum + rem;
        pro = pro * rem;
        temp = temp / 10;
    }

    if (n % (sum + pro) == 0) {
        return true;
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    if (checkDivisibility(n)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}