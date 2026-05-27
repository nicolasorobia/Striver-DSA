#include <iostream>
#include <vector>
using namespace std;

int calculate_pairs(vector<int> vec) {
    int result = 0;
    int prod = 1;

    for (int i = 0; i < vec.size(); i++) {
        for (int j = i + 1; j < vec.size(); j++) {
            prod = vec.at(i) * vec.at(j);
            result += prod;
        }
    }

    return result;
}

int main() {

    vector<int> vec{1, 2, 3};

    int ans = calculate_pairs(vec);
    cout << "The sum of the product of all pairs in this vector is: " << ans;

    return 0;
}