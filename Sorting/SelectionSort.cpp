#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionSort(vector<int>& nums) {
    vector<int> result = nums;

    for (size_t i = 0; i < result.size(); i++) {
        int minIndex = i;

        for (size_t j = i + 1; j < result.size(); j++) {
            if(result[j] < result[minIndex]) {
                minIndex = j;
            }
        }
        
        int temp = result[minIndex];
        result[minIndex] = result[i];
        result[i] = temp;
    }

    return result;
}

int main() {

    vector<int> nums1 {7,4,1,5,3};

    vector<int> result = selectionSort(nums1);

    for (auto& nums : result) {
        cout << nums << " ";
    }

    return 0;
}

