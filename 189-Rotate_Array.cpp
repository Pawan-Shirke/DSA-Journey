#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int high = nums.size() - 1;
    int low = 0;

    k = k % nums.size();

    // Reverse the entire array
    while (low < high) {
        swap(nums[low], nums[high]);
        low++;
        high--;
    }

    // Reverse the first k elements
    low = 0;
    high = k - 1;

    while (low < high) {
        swap(nums[low], nums[high]);
        low++;
        high--;
    }

    // Reverse the remaining elements
    low = k;
    high = nums.size() - 1;

    while (low < high) {
        swap(nums[low], nums[high]);
        low++;
        high--;
    }
}

int main() {
    int n, k;

    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> k;

    rotate(nums, k);

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}