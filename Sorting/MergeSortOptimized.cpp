#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums, int left, int mid, int right) {
    vector<int> temp(nums.begin() + left, nums.begin() + right);

    int i = 0, j = mid - left, k = left;

    int tempMid = mid - left, tempRight = right - left;

    while (i < tempMid && j < tempRight) {
        if (temp[i] <= temp[j]) nums[k++] = temp[i++];
        else                    nums[k++] = 
    }

}

void mergeSortRecursion(vector<int>& nums, int left, int right) {
    if (right - left <= 1) return; // base case

    int mid = left + (right - left) / 2;

    mergeSortRecursion(nums, left, mid);  // split left side in half recursively
    mergeSortRecursion(nums, mid, right); // split right side in half recusrively
    merge(nums, left, mid, right);

}

vector<int> mergeSort(vector<int>& nums) {
    mergeSortRecursion(nums, 0, nums.size());
    return nums;
}

int main() {

    vector<int> nums {7,4,1,5,3};

    vector<int> ans = mergeSort(nums);

    for (auto& num: ans) {
        cout << num << " ";
    }

    return 0;
}