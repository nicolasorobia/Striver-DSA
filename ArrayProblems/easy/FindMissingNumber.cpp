#include <iostream>
#include <vector>
#include <algorithm>

int missingNumber(std::vector<int>& nums) {

    // Find sum of first 'n' natural numbers
    // Formula: n(n+1)/2

    int n = nums.size(); // add one given nums is missing a number

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    long long expSum = (n * 1LL * (n + 1)) / 2;

    return expSum - sum;
}


int main() {

    std::vector<int> nums1 = {0, 2, 3, 1, 4};
    std::vector<int> nums2 = {1, 2, 3, 4, 5};

    int ans1 = missingNumber(nums1); // ans: 5
    int ans2 = missingNumber(nums2); // ans: 6

    std::cout << ans1 << "\n";
    std::cout << ans2 << "\n";

    return 0;
}