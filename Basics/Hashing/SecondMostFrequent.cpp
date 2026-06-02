#include <iostream>
#include <vector>
#include <map>
using namespace std;

int secondMostFrequentElement(vector<int>& nums){
    
    map<int,int> map;

    // count frequency of each element in nums using map as a frequency table
    for (int i : nums) {
        map[i]++;
    }

    int maxFreq = 0;
    int secondMaxFreq = 0;
    int max = -1;
    int secondMax = -1;

    for (auto& [num, freq]: map) {
        if (freq > maxFreq) {
            secondMaxFreq = maxFreq;
            secondMax = max;
            maxFreq = freq;
            max = num;
        } else if( freq > secondMaxFreq && freq != maxFreq) {
            secondMaxFreq = freq;
            secondMax = num;
        }
    }

    return secondMax;

    /*
        nums1 = {1→1, 2→2, 3→3}  (map iterates in sorted order)

        num=1 freq=1: 1>0 → secondMaxFreq=0, ans=-1,  maxFreq=1, elem=1
        num=2 freq=2: 2>1 → secondMaxFreq=1, ans=1,   maxFreq=2, elem=2
        num=3 freq=3: 3>2 → secondMaxFreq=2, ans=2,   maxFreq=3, elem=3
        returns 2 ✓

        nums2 = {4→2, 5→2, 6→1, 7→1}

        num=4 freq=2: 2>0 → secondMaxFreq=0, ans=-1,  maxFreq=2, elem=4
        num=5 freq=2: 2>2 ✗ | 2>0 && 2!=2 ✗ → skip   (tie with max, not second)
        num=6 freq=1: 1>2 ✗ | 1>0 && 1!=2 ✓ → secondMaxFreq=1, ans=6
        num=7 freq=1: 1>2 ✗ | 1>1 ✗        → skip    (strict > blocks overwrite)
        returns 6 ✓
    */
}

int main() {

    vector<int> nums1 {1, 2, 2, 3, 3, 3};
    vector<int> nums2 {4, 4, 5, 5, 6, 7};

    int ans1 = secondMostFrequentElement(nums1);
    int ans2 = secondMostFrequentElement(nums2);
    
    cout << "The 2nd most frequent element in nums1: " << ans1 << endl; // output: 2
    cout << "The 2nd most frequent element in nums2: " << ans2 << endl; // output: 6

    return  0;
}