#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    int i = 0;

    while (i < nums.size() - 1) {
        if (nums[i] + nums[i + 1] == target) {
            res.push_back(i + 1);
            res.push_back(i);
        }

        i++;
    }

    return res;
}

int main() {
    int n, target;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> target;

    vector<int> result = twoSum(nums, target);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}