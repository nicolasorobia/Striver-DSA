#include <iostream>
#include <vector>
#include <unordered_map>

int majorityElement(std::vector<int>& nums)
{
    // TC: O(N), SC: O(N)

    std::unordered_map<int, int> mp;

    int n = nums.size();
    int maxFreq = 0;
    int result = -1; // default if no element found
    
    for (int i = 0; i < n; i++) {
        mp[nums[i]]++;
        if (mp[nums[i]] > maxFreq) {
            maxFreq = mp[nums[i]];
            result = nums[i];
        }
    }

    return result;
}

int main() {

    std::vector<int> nums1 {7, 0, 0, 1, 7, 7, 2, 7, 7};

    std::cout<< majorityElement(nums1);

    return 0;
}