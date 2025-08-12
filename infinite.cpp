//Write a C++ Program to demonstrate infinite recursion
// and how it can lead to a stack overflow error.

#include <bits/stdc++.h>
using namespace std;
void print() {  // Function that calls itself with no base condition
    cout << 1 << endl;   // Print the number 1
    print();  // Recursive call without a stopping condition (infinite recursion)
}
int main() {
    #ifndef ONLINE_JUDGE     
  // Redirecting standard input and output flies (for testing in local envirnoment)
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdin);
    #endif
    print(); // Calls of recursion function 
    return 0;  // Exists the Program
}
