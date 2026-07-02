#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSorted(vector<int>& nums) {
    if (nums.size() <= 1) return true;

    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] > nums[i + 1]) return false;
    }

    return true;
}

int main() {

    vector<int> nums = {8, 8, 7, 6, 5};
    vector<int> nums2 = {1, 2, 3, 4, 5};

    bool ans = isSorted(nums);
    bool ans2 = isSorted(nums2);

    cout << boolalpha;
    cout << ans << "\n";  // false
    cout << ans2 << "\n"; // true


    return 0;
}