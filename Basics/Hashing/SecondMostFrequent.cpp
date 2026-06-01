#include <iostream>
#include <vector>
#include <map>
using namespace std;

int secondMostFrequentElement(vector<int>& nums){
    
    map<int,int> map;

    for (size_t i : nums) {
        map[i]++;
    }

    int maxFreq = 0;
    int secondMaxFreq = 0;
    int ans = -1;
    int elem = -1;

    for (auto& [num, freq]: map) {
        if (freq > maxFreq) {
            secondMaxFreq = maxFreq;
            maxFreq = freq;
            elem = num;
        } else if( freq > secondMaxFreq && freq != maxFreq) {
            secondMaxFreq = freq;
            ans = num;
        }
    }

    return ans;
}

int main() {

    vector<int> nums1 {1, 2, 2, 3, 3, 3};
    vector<int> nums2 {4, 4, 5, 5, 6, 7};

    int ans1 = secondMostFrequentElement(nums1);
    int ans2 = secondMostFrequentElement(nums2);
    
    cout << "The 2nd most frequent element in nums1: " << ans1 << endl; // output: 2
    cout << "The  2nd most frequent element in nums2: " << ans2 << endl; // output: 6



    return  0;
}