#include <iostream>
#include <vector>
using namespace std;

vector<int> bubbleSortRecursion(vector<int>& nums, int size) {
    // base case
    if (size == 0) return nums;

    for (int i = 0; i < size - 1; i++) {
        if (nums[i] > nums[i+1]) {
            swap(nums[i], nums[i+1]);
        }
    }

    return bubbleSortRecursion(nums, size - 1);
}

int main() {

    vector<int> nums {7,4,1,5,3};

    vector<int> ans = bubbleSortRecursion(nums, nums.size());

    for (auto& num: ans) {
        cout << num << " ";
    }

    return 0;
}