#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int low = 0;
    int high = nums.size() - 1;
    int pos = nums.size() - 1;

    vector<int> final(nums.size());

    while (low <= high) {
        if (abs(nums[low]) >= abs(nums[high])) {
            int sqr = nums[low] * nums[low];
            final[pos] = sqr;
            pos--;
            low++;
        }
        else {
            int sqr = nums[high] * nums[high];
            final[pos] = sqr;
            pos--;
            high--;
        }
    }

    return final;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = sortedSquares(nums);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}