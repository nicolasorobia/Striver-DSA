#include <iostream>
#include <vector>
#include <algorithm>

void rotateArrayByOne(std::vector<int>& nums) {
    if (nums.size() <= 1) return;
    int temp = nums[0];
        
    // shift all elements to the left
    for (int i = 1; i < nums.size(); i++) {
        nums[i - 1] = nums[i];
    }

    // put first element in last place with temp
    nums[nums.size() - 1] = temp;
}

void rotate(std::vector<int>& nums, int k) {
    int n = nums.size();
    rotate(nums.begin(), nums.end() - (k % n), nums.end());
}


int main() {

    std::vector<int> nums =  {1, 2, 3, 4, 5};
    std::vector<int> nums2 = {1, 2, 3, 4, 5, 6, 7};

    rotateArrayByOne(nums);

    rotate(nums2, 3);

    for (auto num: nums) {
        std::cout << num << " ";
    }

    std::cout << "\n";

    for (auto num: nums2) {
        std::cout << num << " ";
    }

    return 0;
}