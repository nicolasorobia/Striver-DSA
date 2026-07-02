#include <iostream>
#include <vector>
using namespace std;



void quickSort(vector<int>& nums, int low, int high) {
    if (low >= high) return; // base case

    int start = low;
    int end = high;
    int mid = start + (end - start) / 2;
    int pivot = nums[mid];

    while (start <= end) {
        while (nums[start] < pivot) start++;
        while (nums[end]   > pivot) end--;

        if (start <= end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    quickSort(nums, low, end);
    quickSort(nums, start, high);
}

vector<int> sort(vector<int>& nums) {
    quickSort(nums, 0, nums.size() - 1);
    return nums;
}



int main() {

    vector<int> nums {7,4,1,5,3};

    // quickSort(nums, 0, nums.size() - 1);

    // for (auto& num: nums) {
    //     cout << num << " ";
    // }

    vector<int> ans = sort(nums);

    for (auto& num: ans) {
        cout << num << " ";
    }

    return 0;
}