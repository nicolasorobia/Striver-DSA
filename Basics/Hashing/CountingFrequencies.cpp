#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<vector<int>> countFrequencies(vector<int>& nums) {
    unordered_map<int,int> mp;

    vector<vector<int>> result;

    for (int i : nums) {
        mp[nums[i]]++;
    }

    for (auto& [num, freq]: mp) {
        result.push_back({num, freq});
    }

    return result; 
}

int main() {

    vector<int> nums {1, 2, 2, 1, 3};

    vector<vector<int>> ans = countFrequencies(nums);

    for (size_t i = 0; i < ans.size(); i++) {
        for (size_t j = 0; j < ans.at(i); j++) {
            
        }
    }

    return 0;
}