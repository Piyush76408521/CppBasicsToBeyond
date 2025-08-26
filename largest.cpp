// Write a C++ problem to print the greatest number from the three numbers given by the user.

// Approach-1(Using Condition)
#include <bits/stdc++.h>
using namespace std;
int main() {
  int A,B,C;       // Declaring the numbers A,B,C
  cin >> A >> B >> C;   // Taking the input of A,B,C
if(A > B && A > C) {             
cout << A << endl;          // Check if A is greater than B and C and print A.
} else if(B > C && B > A) {
cout << B << endl;           // Check if B is greater than A and C and print B.
} else if(C > A && C > B) {
cout << C << endl;            // Check if C is greater than B and A and print C.
} else {
cout << A << endl;          // If A, B and C are equal then its print the values.
} 
return 0;                 // End of the Program.
}
