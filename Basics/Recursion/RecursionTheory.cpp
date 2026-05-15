#include <iostream>
#include <string>
using namespace std;

int global_count = 0;

void tailRecursion()
{   
    // Print your name 4 times
    
    if (global_count == 4) // base case
        return;
    global_count++;
    cout << "Nico" << " ";
    tailRecursion();
}

int main()
{
    tailRecursion();
    
    return 0;
}