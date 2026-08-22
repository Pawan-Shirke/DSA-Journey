#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(2 * n);

    for(int i = 0; i < 2 * n; i++) {
        cin >> nums[i];
    }

    vector<int> result;

    for(int i = 0; i < n; i++) {
        result.push_back(nums[i]);
        result.push_back(nums[i + n]);
    }

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}