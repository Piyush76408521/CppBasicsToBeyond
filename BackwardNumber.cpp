// Write a C++ Program to print the numbers in backward direction from 100.

// Approach-1.
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;   // Declaration of n
cin >> n;  // Input the value of n
for(int i=n;i>=n;i--) {  //Outer loop from n to down to 1
for(int j=i;j>=(n-i+1);j--) { // Inner loop from current i up to n
cout << j << " " ; // Print current number 
}
cout << endl; // Move to next line.
}
return 0; // Exists the Program.
}

//Approach-2 soon...


