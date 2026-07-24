#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSumOptimal(std::vector<int>& nums, int target)
{
    std::unordered_map<int,int> seen;                

    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int need = target - nums[i];                

        if (seen.find(need) != seen.end())
        {      
            return {seen[need], i};         
        }

        seen[nums[i]] = i;                          
    }

    return {};
}

int main() {

    std::vector<int> nums1 {1, 6, 2, 10, 3};
    std::vector<int> nums2 {-6, 7, 1, -7, 6, 2};

    int target1 = 7, target2 = 3;

    std::vector<int> ans1 = twoSumOptimal(nums1, target1);
    std::vector<int> ans2 = twoSumOptimal(nums2, target2);

    for (auto num: ans1) {
        std::cout << num << " "; // [0, 1]
    }

    std::cout << "\n";

    for (auto num: ans2) {
        std::cout << num << " "; // [2, 5]
    }


    return 0;
}
