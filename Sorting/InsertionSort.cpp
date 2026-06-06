#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> insertionSort(vector<int>& nums) {

    for(int i = 1; i < (int)nums.size(); i++) {
        // j starts where i is
        int j = i; 

        // compare with left neighbor
        while (j >= 0 && nums[j] < nums[j - 1]) { 
            swap(nums[j], nums[j - 1]);
            // walk left
            j--;
        }
    }

    return nums;
}

int main() {

    vector<int> nums1 {7,4,1,5,3};

    vector<int> result = insertionSort(nums1);

    for (auto& nums : result) {
        cout << nums << " ";
    }

    return 0;
}