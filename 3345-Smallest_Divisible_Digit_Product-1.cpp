#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    for(int i = n; ; i++) {
        int pro = 1;
        int k = i;

        while(k != 0) {
            int rem = k % 10;
            pro = pro * rem;
            k = k / 10;
        }

        if(pro % t == 0) {
            cout << i;
            break;
        }
    }

    return 0;
}