#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<vector<int>> countFrequencies(vector<int>& nums) {
    unordered_map<int,int> mp;

    vector<vector<int>> result;

    for (int i : nums) {
        mp[i]++;
    }

    for (auto& [num, freq]: mp) {
        result.push_back({num, freq});
    }

    return result; 
}

int main() {

    vector<int> nums {1, 2, 2, 1, 3};

    vector<vector<int>> ans = countFrequencies(nums);

    for (auto& row: ans) {
        cout << "[" << row[0] << " -> " << row[1] << "]" << endl;
    }

    return 0;
}