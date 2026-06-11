#include <iostream>
#include <vector>
using namespace std;

// TC: O(nlogn), SC: O(N)

void merge(vector<int>& nums, int left, int mid, int right) {
    // create temporary copy of nums
    vector<int> temp(nums.begin() + left, nums.begin() + right);

    int leftIndex = 0, rightIndex = mid - left, k = left;

    int leftEnd = mid - left, rightEnd = right - left;

    while (leftIndex < leftEnd && rightIndex < rightEnd) {
        if (temp[leftIndex] <= temp[rightIndex]) nums[k++] = temp[leftIndex++];
        else                                     nums[k++] = temp[rightIndex++];
    }

    // copy remaining elements from left half
    while (leftIndex < leftEnd) nums[k++] = temp[leftIndex++];
    // copy remaining elemnts from right half
    while (rightIndex < rightEnd) nums[k++] = temp[rightIndex++];
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