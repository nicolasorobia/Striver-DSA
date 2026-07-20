#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>


int bruteForce(std::vector<int>& nums, int k) {
    // answer key brute force approach
    // TC: O(n^3), SC: O(1)
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

int optimalApproach(std::vector<int>& nums, int k) {
    // prefix-sum + hashmap approach
    // TC: O(N), SC: O(N)

    std::unordered_map<int, int> mp;
    mp[0] = -1; // seed: refer to CASE 1

    int runningSum = 0, maxlen = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        runningSum += nums[i];
        
        // CASE 1: the whole prefix [0..i] itself sums to k.
        // subarray starts at index 0, so its length is i + 1
        // (converting a 0-based index into a count adds 1).
        // if (runningSum == k) {
        //     maxlen = std::max(maxlen, i + 1);
        // }

        // CASE 2: does an earlier prefix equal (runningSum - k) exist?
        // if so, the chunk AFTER that earlier index sums to exactly k.
        int rem = runningSum - k;

        // mp.find(rem) != mp.end()  means  "rem exists as a key in the map".
        // (using find, not mp[rem], so we don't accidentally insert rem.)
        if (mp.find(rem) != mp.end()) {
            int len = i - mp[rem];
            maxlen = std::max(maxlen, len);
        }

        // store runningSum ONLY the first time we see it.
        if (mp.find(runningSum) == mp.end()) {
            mp[runningSum] = i;
        }

    }

    return maxlen;
}


int main() {

    std::vector<int> nums1 {10, 5, 2, 7, 1, 9};
    std::vector<int> nums2 {-3, 2, 1};
    std::vector<int> nums3 {-1, 1, 1};
    std::vector<int> nums4 {1,2,3,-2,2,4,-1,1,2,-1};

    std::cout << bruteForce(nums1, 15) << "\n"; // 4
    std::cout << bruteForce(nums2, 6) << "\n";  // 0
    std::cout << bruteForce(nums3, 1) << "\n";  // 3
    std::cout << bruteForce(nums4, 5) << "\n";  // 7

    std::cout << "----------------------------\n";

    std::cout << optimalApproach(nums1, 15) << "\n"; // 4
    std::cout << optimalApproach(nums2, 6) << "\n";  // 0
    std::cout << optimalApproach(nums3, 1) << "\n";  // 3
    std::cout << optimalApproach(nums4, 5) << "\n";  // 7

    


    return 0;
}