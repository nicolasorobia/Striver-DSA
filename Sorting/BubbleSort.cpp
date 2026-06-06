#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> bubbleSort(vector<int>& nums) {

    for (size_t i = nums.size() - 1; i > 0; i--) {
        for (size_t j = 0; j < i; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }

    return nums;
}

int main() {

    vector<int> nums1 {7,4,1,5,3};
    vector<int> nums2 {5,4,4,1,1};

    vector<int> result = bubbleSort(nums1);
    vector<int> result2 = bubbleSort(nums2);

    for (auto& nums : result) {
        cout << nums << " ";
    }

    cout << endl;

    for (auto& nums : result2) {
        cout << nums << " ";
    }

    return 0;

    
    return 0;
}