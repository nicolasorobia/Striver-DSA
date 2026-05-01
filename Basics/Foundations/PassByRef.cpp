#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(vector<int>& arr) {

    // NAIVE APPROACH:
    // vector<int> ans {};
    // int last_index = arr.size() - 1;
    // for (int i = 0; i < arr.size(); i++) {
    //     ans.push_back(arr[last_index--]);
    // }

    // arr.swap(ans);
    // for (auto num: arr) {
    //     cout << num << " ";
    // }

    // // std::reverse approach: (depends on #include <algorithm>)
    // std::reverse(arr.begin(), arr.end());
    // for (auto num: arr) {
    //     cout << num << " ";
    // }

    // Two-pointer approach:
    int left = 0;
    int right = static_cast<int>(arr.size() - 1);

    while (left < right) {
        swap(arr[left], arr[right]); //swap() using #include <algorithm>
        left++;
        right--;
    }

    for (auto num: arr) {
        cout << num << " ";
    }

}

int main() {
    vector<int> arr = {1,2,3,4,5};
    reverse(arr);

}