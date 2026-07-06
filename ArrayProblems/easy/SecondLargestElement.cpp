#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int secondLargestElement(vector<int>& nums) {
    // check if vector is empty first
    if (nums.empty()) return  -1;

    int max = 0;
    int second_max = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > max) {
            second_max = max;
            max = nums[i];
        } else if (nums[i] > second_max && nums[i] < max) {
            second_max = nums[i];
        }
    }

    // check if second largest element was found and assigned
    if (second_max == 0) return - 1;

    return second_max;
}

int main() {

    vector<int> nums = {8, 8, 7, 6, 5};
    vector<int> nums2 = {8, 8, 8, 8};
    vector<int> nums3 = {};

    int ans = secondLargestElement(nums);
    int ans2 = secondLargestElement(nums2);
    int ans3 = secondLargestElement(nums3);

    cout << ans << "\n";
    cout << ans2 << "\n";
    cout << ans3 << endl;

    return 0;
}