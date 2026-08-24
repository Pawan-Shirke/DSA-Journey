#include <iostream>
#include <vector>
using namespace std;

int minOperations(vector<int>& nums, int k) {
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum = sum + nums[i];
    }

    int count = 0;

    while (sum % k != 0) {
        sum--;
        count++;
    }

    return count;
}

int main() {
    int n, k;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> k;

    cout << minOperations(nums, k);

    return 0;
}