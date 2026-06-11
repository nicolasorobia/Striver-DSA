#include <iostream>
#include <vector>
using namespace std;

vector<int> recursiveInsertionSort(vector<int>& nums, int n) {
    // base case
    if (n <= 1) return nums;

    recursiveInsertionSort(nums, n - 1);

    int j = n - 1;
    while (j > 0 && nums[j] < nums[j-1]) {
        swap(nums[j], nums[j-1]);
        j--;
    }

    return nums;
}

int main() {
     vector<int> nums {7,4,1,5,3};

    vector<int> ans = recursiveInsertionSort(nums, nums.size());

    for (auto& num: ans) {
        cout << num << " ";
    }

    return 0;
}