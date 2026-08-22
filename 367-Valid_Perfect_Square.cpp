#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    if(num == 1) {
        cout << "true";
        return 0;
    }

    for(long long i = 1; i <= num / 2; i++) {
        if(i * i == num) {
            cout << "true";
            return 0;
        }
    }

    cout << "false";

    return 0;
}