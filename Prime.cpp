#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; //Declaration of the number n.
    cin >> n; // input of number n.
    int cnt = 0; // Intial value of count.
    for (int i = 1; i <= n; i++)  // range of the number n.
    {                              // using of if-else statemnt.
        if (n % i == 0)  // condition for n if its true then exceutes.
            cnt++;
    }
    if (cnt == 2) // nested condition .
        cout << n << " it is a prime number";
    else
        cout << n << " it is not a prime number";
    cout << endl;
  return 0;
}
