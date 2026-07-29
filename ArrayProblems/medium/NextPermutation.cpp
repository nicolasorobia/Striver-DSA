#include <iostream>
#include <vector>
#include <algorithm>

void nextPermutation(std::vector<int>& nums) {
    int n = nums.size();
    int idx = -1;

    // from right to left, find index pos when elements not ascending
    // when nums[i] < nums[i + 1]
    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] < nums[i + 1]) {
            idx = i;
            break;
        }
    }

    // if idx is still -1, array is already the largest possible permutation
    // reverse array to go to smallest possible permutation
    if (idx == -1) return std::reverse(nums.begin(), nums.end());

    // find an element > idx, but the smallest one
    for (int i = n - 1; i > idx; --i) {
        if (nums[i] > nums[idx]) {
            std::swap(nums[i], nums[idx]);
            break;
        } 
    }

    // reverse the elements after idx to get the smallest possible permutation > nums originally
    std::reverse(nums.begin() + idx + 1, nums.end());
}

int main() {

    std::vector<int> nums1 {1, 2, 3};
    std::vector<int> nums2 {3, 2, 1};

    nextPermutation(nums1);
    nextPermutation(nums2);

    for (auto num : nums1) {
        std:: cout << num << " ";
    }
    
    std::cout << "\n";

    for (auto num : nums2) {
        std:: cout << num << " ";
    }

    return 0;
}