#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    if(x == 0 || x == 1) {
        cout << x;
        return 0;
    }

    long long low = 1;
    long long high = x / 2;
    long long res = 0;

    while(low <= high) {
        long long mid = (low + high) / 2;

        if(mid * mid <= x) {
            res = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << res;

    return 0;
}