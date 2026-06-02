#include <iostream>
#include <vector>
#include <map>
using namespace std;

int findSumOfHighestAndLowestFreq(vector<int>& nums) {

    map<int,int> freqMap;

    for (int i : nums) {
        freqMap[i]++;
    }

    int mostFrequentNum = INT_MIN;
    int leastFrequentNum = INT_MAX;
    
    for (auto& [num, freq] : freqMap) {
        if (freq > mostFrequentNum) {
            mostFrequentNum = freq;
        }

        if (freq < leastFrequentNum) {
            leastFrequentNum = freq;
        }
    }

    return mostFrequentNum + leastFrequentNum;
}



int main() {

    vector<int> nums1 {1, 2, 2, 3, 3, 3};
    vector<int> nums2 {4, 4, 5, 5, 6, 7};

    int ans1 = findSumOfHighestAndLowestFreq(nums1);
    int ans2 = findSumOfHighestAndLowestFreq(nums2);
    
    cout << "The sum of highest and lowest freq in nums1: " << ans1 << endl; // output: 3 + 1 = 4
    cout << "Thesum of highest and lowest freq in nums2: " << ans2 << endl; // output: 2 + 1 = 3



    return 0;
}