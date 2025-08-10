#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;     // Declaration of n
    cin >> n;
    int sum = 0;  // Declaration of sum
    int dup = n;  // Declaration of dup (check whether the ouput comes if it is equal ton or not )
    while (n > 0)
    {
        int r = n % 10;  // Get the last digit from n and declarainf and intialize of r
        sum = (sum * 10) + r; // Build the reverse number
        n = n / 10; // Remove the number
    }
    if (sum == dup) // if reversed number is equal to original
    {
        cout << "Yes,It's is a Palindrome Number" << endl;
    }
    else
    {
        cout << "No,It's not a Palindrome number" << endl;
    }
    return 0;
}
