#include <iostream>
#include <vector>

int findMaxConsecutiveOnes(std::vector<int>& nums) {
    int count = 0;
    int max = 0;

    int n = nums.size();
    for (int i = 0; i < n; i++) {
        if (nums[i] == 1) {
            count++;
            if (count > max) {
                max = count;
            }
        } else {
            count = 0;
        }
    }

    return max;
}

int main() {

    std::vector<int> nums = {1, 1, 0, 0, 1, 1, 1, 1, 0};

    std::cout << findMaxConsecutiveOnes(nums);

    return 0;
}