#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    int temp = x, rem;
    long long rev = 0;

    while (temp != 0) {
        rem = temp % 10;
        temp = temp / 10;
        rev = rev * 10 + rem;
    }

    if (rev == x) {
        return true;
    }

    return false;
}

int main() {
    int x;
    cin >> x;

    if (isPalindrome(x)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}