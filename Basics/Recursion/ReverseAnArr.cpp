#include <iostream>
#include <utility>
using namespace std;

void reverse(int arr[], int n, int start = 0) {
   if (start >= n - 1 - start) return;

   swap(arr[start], arr[n - 1 - start]);

   reverse(arr, n, start + 1);
}

void reverse_using_pointer_method(int arr[], int n) {
    int p1 = 0;
    int p2 = n - 1;

    while (p1 < p2) {
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
}

int main() {

    int arr[] {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Original arr: ";
    for (auto num : arr) {
        cout << num << " ";
    }
    cout << endl;

    reverse(arr, n, 0);

    cout << "Reversed arr using recursion: ";
    for (auto num : arr) {
        cout << num << " ";
    }
    cout << endl;

    reverse_using_pointer_method(arr, n);

    cout << "Reversed arr using pointer method: "; // should go back to 1 2 3 4 5
    for (auto num : arr) {
        cout << num << " ";
    }
    cout << endl;


    return 0;
}