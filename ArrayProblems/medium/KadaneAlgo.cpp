#include <iostream>
#include <vector>
#include <algorithm>

void maxSubArray(std::vector<int>& nums)
{
    int n = nums.size();
    int globalMax = nums[0], currentMax = nums[0];

    int start = 0, bestStart = 0, bestEnd = 0;

    for (int i = 1; i < n; ++i)
    {
        if (nums[i] > nums[i] + currentMax)
        {
            currentMax = nums[i];
            start = i;
        } else
        {
            currentMax = nums[i] + currentMax;
        }

        if (currentMax > globalMax)
        {
            globalMax = currentMax;
            bestStart = start;
            bestEnd = i;
        }
    }

    std::cout << "The subarray from index " 
              << bestStart << " to index " << bestEnd << " has the largest sum = " << globalMax << "\n";

    // use this if you only need to find the result of max sub array:
    // for (int i = 1; i < n; ++i)
    // {
    //     currentMax = std::max(nums[i], nums[i] + currentMax);
    //     globalMax  = std::max(currentMax, globalMax);
    // }

}

int main()
{
    std::vector<int> nums1 {2, 3, 5, -2, 7, -4};
    maxSubArray(nums1);

    std::vector<int> nums2 {-2, -3, -7, -2, -10, -4};
    maxSubArray(nums2);

    return 0;
}