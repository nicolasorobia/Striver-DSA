#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int largestElement(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    return nums.back(); // return last element in nums after sorted
}



int main() {

    vector<int> nums = {3, 2, 1, 5, 2};

    int ans = largestElement(nums);

    cout << ans << "\n";

    return 0;
}