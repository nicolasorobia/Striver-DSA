#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

/*
    Given an array nums of n integers, find the most frequent element in it i.e., 
    the element that occurs the maximum number of times. 
    If there are multiple elements that appear a maximum number of times, 
    find the smallest of them.
*/

int mostFrequentElement(vector<int>& nums) {

    map<int, int> mp;
    for (size_t i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;
    }

    int maxFreq = 0;
    int result = 0;
    for (auto& [num, freq] : mp) {
        if (freq > maxFreq)
        {
            maxFreq = freq;
            result = num;
        }
    }

    /*
        Logic:
        nums2 = {4,4,5,5,6} → mp: {4→2, 5→2, 6→1}
        4→2: 2>0 ✓  result=4, maxFreq=2
        5→2: 2>2 ✗  tie — 4 stays because strict > blocks overwrite
        6→1: 1>2 ✗  
        returns 4 ✓
    */

    return result;
}

int other_method(vector<int>& nums) {

    unordered_map<int, int> map;

    // count frequencies of elements in nums and store in map
    for (size_t i = 0; i < nums.size(); i++) {
        map[nums[i]]++;
    }

    int maxFreq = 0;
    int result {};
    for (auto it: map) {
        int number = it.first;
        int count = it.second;

        if (count > maxFreq || count == maxFreq && number < result) {
            maxFreq = count;
            result = number;
        }
    }

    // Unlike map, unordered_map has NO guaranteed iteration order.
    // So we can't rely on 4 always arriving before 5.
    // The || tie-breaker handles both possible orderings:
    //
    // nums2 = {4,4,5,5,6} → mp: {4→2, 5→2, 6→1}
    //
    // SCENARIO A — 4 iterates first (tie-breaker not needed):
    //   4→2: 2>0 ✓                           result=4, maxFreq=2
    //   5→2: 2>2 ✗ | 2==2 && 5<4 ✗  skip    result=4, maxFreq=2
    //   6→1: 1>2 ✗ | 1==2 ✗         skip    result=4, maxFreq=2
    //   returns 4 ✓
    //
    // SCENARIO B — 5 iterates first (tie-breaker saves us):
    //   5→2: 2>0 ✓                           result=5, maxFreq=2
    //   4→2: 2>2 ✗ | 2==2 && 4<5 ✓  update   result=4, maxFreq=2
    //   6→1: 1>2 ✗ | 1==2 ✗          skip    result=4, maxFreq=2
    //   returns 4 ✓

    return result;
}

int main() {

    vector<int> nums1 {1, 2, 2, 3, 3, 3};
    vector<int> nums2 {4, 4, 5, 5, 6};

    int ans1 = mostFrequentElement(nums1);
    int ans2 = mostFrequentElement(nums2);
    
    cout << "The most frequent element in nums1: " << ans1 << endl; // output: 3
    cout << "The most frequent element in nums2: " << ans2 << endl; // output: 4

    cout << "\nSame method using unordered_map:" << endl;

    int ans3 = other_method(nums1);
    int ans4 = other_method(nums2);

    cout << "The most frequent element in nums1: " << ans3 << endl; // output: 3
    cout << "The most frequent element in nums2: " << ans4 << endl; // output: 4


    return 0;
}