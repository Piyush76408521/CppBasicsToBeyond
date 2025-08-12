// Write a C++ Program to find gcd(Greatest Common Divisor) of two number 48 and 17.

//Approach-1
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)  // Creating a function GCD and declaring the a and b of int type.
{
    while (a > 0 && b > 0)   // condition to satisfy that both a and b be greater than 0 then the program will execute.
    {
        if (a > b)   
            a = a % b;   // if a > b then a will be updated
        else
            b = b % a;  // if b > a then b will be updated
    }
    if (a == 0)
        return b;   // Returning the value b
    else
        return a;  // Returning the value a.
}
int main() {
  int num1 = 48;  // Declaring and Intialising the value of num1.
  int num2 = 17; // Declaring and Intialising the value of num2.
  int result = gcd(num1, num2);  // Formula for getting GCD of two numbers
  cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;  // Print the Output.
}  

//Approach -2
int main() {
  int a,b;  // Declaraing the a and b and it type.
cout << "Enter two numbers: ";   // Print the Enter two numbers.
cin >> a >> b;  // Taking the values from users.
while(b!=0) {
int temp=b;  // Interchanging the value.
b=a%b;  // interchanging the value by a and b
a=temp; // Updating the value
}
cout << "GCD=" << a << endl;  // Print the output of GCD 
return 0; // Exists the Program
}
