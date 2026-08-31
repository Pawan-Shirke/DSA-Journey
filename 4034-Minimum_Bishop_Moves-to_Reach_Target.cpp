#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int minBishopMoves(vector<int>& source, vector<int>& target) {
    int sr = source[0];
    int sc = source[1];

    int tr = target[0];
    int tc = target[1];

    // Bishop can only move on squares of the same color
    if ((sr + sc) % 2 != (tr + tc) % 2) {
        return -1;
    }

    // Target is on the same diagonal
    if (abs(sr - tr) == abs(sc - tc)) {
        return 1;
    }

    // Same color but different diagonal
    return 2;
}

int main() {
    vector<int> source(2);
    vector<int> target(2);

    cin >> source[0] >> source[1];
    cin >> target[0] >> target[1];

    cout << minBishopMoves(source, target);

    return 0;
}