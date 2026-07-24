#include <iostream>
#include <vector>
#include <algorithm>


int bruteForce(std::vector<int>& nums, int k) {
    // answer key brute force approach
    // TC: O(n^2), SC: O(1)
    int n = nums.size();
    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += nums[j];
            if (sum == k) {
                ans = std::max(ans, (j - i + 1));
            }
        }
    }

    return ans;
}


int main() {

    std::vector<int> nums1 {10, 5, 2, 7, 1, 9};
    std::vector<int> nums2 {-3, 2, 1};
    std::vector<int> nums3 {-1, 1, 1};
    std::vector<int> nums4 {-38,534,204,-848,-223,-762,767,277,-717};

    std::cout << bruteForce(nums1, 15) << "\n"; // 4
    std::cout << bruteForce(nums2, 6) << "\n";  // 0
    std::cout << bruteForce(nums3, 1) << "\n";  // 3
    std::cout << bruteForce(nums4, -1066) << "\n";  // 4

    


    return 0;
}