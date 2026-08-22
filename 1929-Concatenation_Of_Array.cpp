#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < nums.size(); j++) {
            result.push_back(nums[j]);
        }
    }

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}