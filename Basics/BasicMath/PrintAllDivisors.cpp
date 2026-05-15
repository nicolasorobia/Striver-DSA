#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> divisors(int n) {

    std::vector<int> ans{};

    // brute force
    // for (auto i = 1; i <= n; i++) {
    //     if (n % i == 0) ans.push_back(i);
    // }

    // optimal
    for (auto i = 1; i <= std::sqrt(n); i++) {
        if (n % i == 0){
            ans.push_back(i);
            if (i != n/i) {
                ans.push_back(n/i);
            }
        }
    }
    std::sort(ans.begin(), ans.end());
    
    return ans;
}

int main() {

    int n = 36;

    std::vector<int> ans = divisors(n);
    for (auto divs: ans) {
        std::cout << divs << " ";
    }

    return 0;
}