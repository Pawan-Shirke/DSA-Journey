#include <iostream>
#include <string>
using namespace std;

string toLowerCase(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a';
        }
    }

    return s;
}

int main() {
    string s;
    cin >> s;

    cout << toLowerCase(s);

    return 0;
}