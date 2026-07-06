#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSorted(vector<int>& nums) {
    if (nums.size() <= 1) return true;

    for (int i = 0; i < (int)nums.size() - 1; i++) {
        if (nums[i] > nums[(i + 1)]) return false;
    }

    return true;
}

bool isSortedAndRotated(vector<int>& nums) {
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) count++;
        if (count > 1) return false;
    }

    return true;
}

int main() {

    vector<int> nums = {8, 8, 7, 6, 5};
    vector<int> nums2 = {1, 2, 3, 4, 5};
    vector<int> nums3 = {3, 4, 5, 1, 2};
    vector<int> nums4 = {2, 1, 3, 4};

    bool ans = isSorted(nums);
    bool ans2 = isSorted(nums2);

    bool ans3 = isSortedAndRotated(nums3);
    bool ans4 = isSortedAndRotated(nums4);

    cout << boolalpha;
    cout << ans << "\n";  // false
    cout << ans2 << "\n"; // true
    cout << ans3 << "\n";
    cout << ans4 << "\n";


    return 0;
}