#include <iostream>
#include <vector>
#include <algorithm>

int stockBuySell(std::vector<int> arr, int n)
{
    int minPrice = arr[0];   // cheapest price seen so far
    int maxProfit = 0;       // best profit found so far
    int buyDay = 0;          
    int sellDay = 0;
    int insiderLeak = 0;     // day the current minPrice is found on     

    for (int i = 1; i < n; i++)
    {
        // sell today assuming best buy was yesterday when only price found was the cheapest
        // if it has more profit than current maxProfit, then
        if (arr[i] - minPrice > maxProfit) {
            maxProfit = arr[i] - minPrice;
            // uncomment this if you want the position of best day to buy and sell:
            // buyDay = insiderLeak;
            // sellDay = i;
        }

        // update current minPrice if cheaper price found
        // update best day to buy (insiderLeak) as well
        if (arr[i] < minPrice) {
            minPrice = arr[i];
            // uncomment this if you want the position of best day to buy and sell:
            // insiderLeak = i;
        }
    }

    return maxProfit;
}

int main()
{
    std::vector<int> nums1 {10, 7, 5, 8, 11, 9};
    std::vector<int> nums2 {5, 4, 3, 2, 1};
    std::vector<int> nums3 {3, 8, 1, 4, 6, 2};

    std::cout<< stockBuySell(nums1, static_cast<int>(nums1.size())) << "\n";
    std::cout<< stockBuySell(nums2, static_cast<int>(nums2.size())) << "\n";
    std::cout<< stockBuySell(nums3, static_cast<int>(nums3.size())) << "\n";


    return 0;
}