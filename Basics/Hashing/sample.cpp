#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {

    int n {};
    cout << "Enter size for n: "; cin >> n;

    vector<int> arr(n);
    cout << "Enter values for arr: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // precompute:
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // iterate over the map:
    // for(auto it : mp) {
    //     cout << it.first << "->" << it.second << endl;
    // }
    
    int q;
    cout << "How many numbers do you want to search in query: "; cin >> q;

    cout << "Enter the numbers you are looking for: ";
    while (q--) {
        int number;
        cin >> number;
        // fetch:
        cout << number << "->" << mp[number] << endl;
    }

    return 0;
}
