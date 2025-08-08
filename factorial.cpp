#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;                               // Declaration of the value.
  cout << "enter a positive integer";  // Print the sentence
  cin >> n;
  int fact=1;                          // Intial value for factorial starting with 1.
for(int i=1;i<=n;i++) {                // Range for the number n and i++ means increment of value with 1 .
 fact=fact*i;                          // multipyling the number 
}
   cout << "factorial of" << n << "is:" << fact << endl; // Printing the factorial of n.
     return 0;                        // exists the program
}
