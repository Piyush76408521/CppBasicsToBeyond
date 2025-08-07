#include <bits/stdc++.h>
using namespace std;
int main() {
  int m , n; //Declaration of numbers m and n and its data type.
  cin >> m >> n; //Input the numbers m and n.
  int sum= m + n; // Sum of Two Numbers
  int mul= m* n; // Multiplication of two numbers.
  float div= (float)m/n; //Division of numbers and typecasting.
  int rem= m%n ; // Giving the remainder value.
  int square_m= m*m ; // Square of a number m.
  int sub= m - n; // Subtraction of two numbers.
  
  cout << "sum:" << sum << endl; // printing the value of sum of two numbers.
  cout << "mul:" << mul << endl; // printing the value of mul of two numbers.
  cout << "div:" << div << endl; // printing the value of div of two numbers.
  cout << "rem:" << rem << endl; // printing the value of rem of two numbers.
  cout << "square_m:" << square_m <<  endl; // printing the value of square of two numbers.
  cout << "sub:" << sub <<  endl; // printing the value of sub of two numbers.
return 0;
}
