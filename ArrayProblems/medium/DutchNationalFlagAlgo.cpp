#include <iostream>
#include <vector>
#include <algorithm>

void sortZeroOneTwo(std::vector<int>& nums)
{
    // Requirements - TC: O(N), SC: O(1)
    // Use Dutch National Flag Algorithm

    // initialize low = 0, mid = 0, high = size - 1
    int low = 0, mid = 0, high = nums.size() - 1;

    // iterate while mid <= high
    //   a. if nums[mid] == 0: swap nums[low] & nums[mid], low++ and mid++
    //   b. if nums[mid] == 1: mid++
    //   c. if nums[mid] == 2: swap nums[mid] & nums[high], high--

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            std::swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else if (nums[mid] == 2)
        {
            std::swap(nums[mid], nums[high]);
            high--;
        }
    }

    for (auto num: nums) {
        std::cout << num << " ";
    }
}

int main()
{
    std::vector<int> nums1 {1, 0, 2, 1, 0};
    std::vector<int> nums2 {1, 1, 2, 2, 1};

    sortZeroOneTwo(nums1);
    std::cout << "\n";
    sortZeroOneTwo(nums2);

    return 0;
}