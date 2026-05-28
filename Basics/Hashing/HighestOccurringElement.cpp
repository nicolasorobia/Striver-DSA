#include <climits>
#include <cstddef>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int mostFrequentElement(vector<int>& nums) {

    map<int, int> mp;
    for (size_t i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;
    }

    int maxFreq = 0;
    int result = INT_MIN;
    for (auto& [num, freq] : mp) {
        if (freq > maxFreq)
        {
            maxFreq = freq;
            result = num;
        }
    }

    return result;

}

int main() {

    vector<int> nums1 {1, 2, 2, 3, 3, 3};
    vector<int> nums2 {4, 4, 5, 5, 6};

    int ans1 = mostFrequentElement(nums1);
    int ans2 = mostFrequentElement(nums2);
    
    cout << "The most frequent element in nums1: " << ans1 << endl; // output: 3
    cout << "The most frequent element in nums2: " << ans2 << endl; // output: 4


    return 0;
}