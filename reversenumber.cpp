#include <bits/stdc++.h>
using namespace std;
int main() {
int n;                        //Declaration of the number.
cin >> n;
int Revnum=0;                  // Intial value of Revnum
while(n>0) {                   // condition
int r = n % 10;                // Get the last digit of n.
Revnum =( Revnum*10) + r;       // Append digits to reverse numbers.
n = n/10;                       // Remove the last digit if it is 0.
}
cout << "Reverse of n is:" << Revnum;   // output the result
return 0;                                 // end of Program.
}
