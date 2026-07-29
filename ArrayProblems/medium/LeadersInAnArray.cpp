#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> leaders(std::vector<int>& nums) {
    std::vector<int> leaders{};
    int n = nums.size();
    int last = nums[n - 1];

    // the last element is always a leader
    leaders.push_back(last);

    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] > last) {
            leaders.push_back(nums[i]);
            last = nums[i];
        }
    }

    std::reverse(leaders.begin(), leaders.end());

    return leaders;
}

int main() {

    std::vector<int> nums1 {1, 2, 5, 3, 1, 2};
    std::vector<int> nums2 {-3, 4, 5, 1, -4, -5};

    std::vector<int> ans1 = leaders(nums1);
    std::vector<int> ans2 = leaders(nums2);

    for (auto num: ans1) {
        std::cout << num << " ";
    }

    std::cout << "\n";

    for (auto num : ans2) {
        std:: cout << num << " ";
    }
    
    return 0;
}