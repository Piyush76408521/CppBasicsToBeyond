// Write a C++  program to calculate the leap year.

// Approach -1
#include <bits/stdc++.h>
using namespace std;
int main(){
    int year;    // Declaring the variable year
    cin >> year;  // Taking the input of year
    if((year%4==0 && year%100!=0) || (year%400==0)){   // condition for leap year 
        cout << "Leap Year" << endl;
    }else{
        cout << "Not a Leap Year" << endl;
    }
    return 0;    // End of the program.
}
