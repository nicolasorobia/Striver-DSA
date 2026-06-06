#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionSort(vector<int>& nums) {

    for (size_t i = 0; i < nums.size(); i++) {
        int minIndex = i;

        for (size_t j = i + 1; j < nums.size(); j++) {
            if (nums[j] < nums[minIndex]) {
                minIndex = j;
            }
        }

        int temp = nums[minIndex];
        nums[minIndex] = nums[i];
        nums[i] = temp;
    }

    return nums;
}

int main() {

    vector<int> nums1 {7,4,1,5,3};

    vector<int> result = selectionSort(nums1);

    for (auto& nums : result) {
        cout << nums << " ";
    }

    return 0;
}

