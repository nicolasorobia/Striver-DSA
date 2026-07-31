#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

int longestConsecutive(std::vector<int>& nums) {

    // TC: O(n log n), SC: O(1)

    // std::sort(nums.begin(), nums.end());
    
    // int n = nums.size();
    // int count = 1;
    int longestStreak = 1;
    // for (int i = 0; i < n - 1; ++i) {
    //     if (nums[i + 1] == nums[i] + 1) {
    //         count++;
    //         longest = std::max(longestStreak, count);
    //     } else if (nums[i + 1] == nums[i]) {
    //         continue;
    //     } else {
    //         count = 1;
    //     }
    // }


    // Optimal - TC: O(n), SC: O(1)

    std::unordered_set<int> mySet(nums.begin(), nums.end());

    for (int num: mySet) {
        // if the current element doesn't have a number lower than it by one in the set
        // then it may be a possible sequence of consecutive increments
        // otherwise skip to next element
        if (mySet.find(num - 1) == mySet.end()) {
            int currentNum = num;
            int currentStreak = 1;

            while (mySet.find(currentNum + 1) != mySet.end()) {
                currentNum += 1;
                currentStreak += 1;
            }

            longestStreak = std::max(longestStreak, currentStreak);
        }
    }

    return longestStreak;
}

int main() {

    std::vector<int> nums1 {-19,-9,15,2,7,16,11,-16,2,13,-8,2,1,16,18,-5,-13,-14,-9,-2,9,12,7,-1,15,-6,3,-9};

    std::cout << longestConsecutive(nums1) << "\n";

    return 0;
}