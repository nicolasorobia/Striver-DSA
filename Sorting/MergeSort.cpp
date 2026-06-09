#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& leftVec, vector<int>& rightVec, vector<int>& nums) {
    int leftSize = leftVec.size();
    int rightSize = rightVec.size();

    int i = 0, leftIndex = 0, rightIndex = 0;

    // check the conditions for merging
    while (leftIndex < leftSize && rightIndex < rightSize) {
        if(leftVec[leftIndex] < rightVec[rightIndex]) {
            nums[i] = leftVec[leftIndex];
            i++;
            leftIndex++;
        } else {
            nums[i] = rightVec[rightIndex];
            i++;
            rightIndex++;
        }
    }


    while (leftIndex < leftSize) {
        nums[i] = leftVec[leftIndex];
        i++;
        leftIndex++;
    }

    while (rightIndex < rightSize) {
        nums[i] = rightVec[rightIndex];
        i++;
        rightIndex++;
    }
}

void mergeSortHelper(vector<int>& nums) {
    int n = nums.size();

    if (n <= 1) return; // base case

    int mid = n / 2;
    vector<int> leftVec;
    vector<int> rightVec;

    int i = 0; // leftVec
    int j = 0; // rightVec

    // divide nums vector into left side and right side
    for(; i < n; i++) {
        if (i < mid) {
            leftVec.push_back(nums[i]);
        } else {
            rightVec.push_back(nums[i]);
            j++;
        }
    }
    mergeSortHelper(leftVec);
    mergeSortHelper(rightVec);
    merge(leftVec, rightVec, nums);
}

vector<int> mergeSort(vector<int>& nums) {
    mergeSortHelper(nums);
    return nums;
}


int main() {

    vector<int> nums {8,2,5,3,4,7,6,1};

    vector<int> ans = mergeSort(nums);

    for (auto& num: ans) {
        cout << num << " ";
    }

    return 0;
}