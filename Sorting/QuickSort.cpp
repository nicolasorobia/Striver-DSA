#include <iostream>
#include <vector>
using namespace std;

void placePivot(vector<int>& nums, int left, int right) {
    int pivot = nums[left];

    int i = left, j = right;

    while ( i < j) {
        while (nums[i] < nums[pivot] && )
    }
}

vector<int> quickSortRecursion(vector<int>& nums, int left, int right) {

}

vector<int> quickSort(vector<int>& nums) {
    // place pivot in correct location

}

int main() {

    vector<int> nums {7,4,1,5,3};

    vector<int> ans = quickSort(nums);

    for (auto& num: ans) {
        cout << num << " ";
    }

    return 0;
}