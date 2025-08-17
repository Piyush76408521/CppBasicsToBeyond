// Write a Program in C++. To show the fibanocii number of 6. 

// Approach -1:using recursion(Function call itself)
#include <bits/stdc++.h>     // Include all standard  libraries of c++. 
using namespace std;        // Use the standard names
int f(int n) {              // Declaring a function f and Declaring n in it.
  if(n<=1) {                // A condition that if n is less than or equal to 1.
return n; // return the value n as an output.
  }
  else{
    return f(n-1) + f(n-2);  // Return the  summation value of previous two numbers .
  }
}

int main() {
  #ifndef ONLINE_JUDGE  // This part is just for only judges (ignore if running locally)
  freopen("input.txt","r",stdin); // Take input from file
freopen("output.txt","w",stdout);  // Take output from file
#endif
cout << f(6); // Call Fibonacii function for n=6 and print result
return 0; // End of Program
}

Approach -2 (soon)
