// Write a C++ program to print the last digit of a number.

// Approach -1(using basic math)
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;    // Declaring the number n
  cin >> n;  // Taking input of number n
  int ans = abs(n) % 10;  // Giving the last digit of number n 
                           // abs is used to avoid negative value
  cout << ans << endl;  // Printing the value 
  return 0; // End of the Program
}
