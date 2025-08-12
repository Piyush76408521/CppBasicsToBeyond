// Write a c++ code program to display powers of 2 for the range 0 to 100.

// Approach -1.
#include <bits/stdc++.h>
using namespace std;
int main() {
for(int i=0;i<=100;i++) {    // range of the power of a number .
int power=pow(2,i);      // Declartion of a power and in bracket the 2 is the number n and i  is the power of 2.
cout << "2^" << i << "=" << power << endl;  // Result of the power
}
return 0;  // Exists of program
}

// Approach -2
int main() {
  double base,exponent;
cout << "enter base : ";
cin >> base;
cout << " enter exponent : ";
cin >> exponent;
cout << base << "^" << exponent << "=" << pow(pow,exponent) << endl;
return 0;
}
