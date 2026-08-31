#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canJump(vector<int>& nums) {
    int i = 0;
    int n = nums.size() - 1;
    int high = 0;

    while (i <= high && i <= n) {
        high = max(high, i + nums[i]);

        if (high >= n) {
            return true;
        }

        i++;
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << canJump(nums);

    return 0;
}