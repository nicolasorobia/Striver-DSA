#include <iostream>
#include <vector>
#include <unordered_map>

int maxSubArray(std::vector<int>& nums)
{
    std::unordered_map<int, int> mp;

    int runningSum = 0, maxSum = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        runningSum += nums[i];

        maxSum = runningSum;

        
    }
}

int main()
{


    return 0;
}