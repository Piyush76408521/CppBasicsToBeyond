#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> matA(n, vector<int>(n, 0)); //Declaration of matA
    vector<vector<int>> res(n, vector<int>(n, 0)); // Declaratiion of res
    for (int i = 0; i < n; i++ )  // number of rows for matA
    {
        for (int j = 0; j < n; j++) // number of columns for matA
        {
            int t;
            cin >> t;
            matA[i][j] = t;  
        }
    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            cout << matA[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)   // number of rows for res
    {
        for (int j = 0; j < n; j++)   // number of columns for res
        {
            res[i][j] = matA[j][i];   // Transposing the vaues of matA
        }
    }
    cout << "Transpose of a matrix is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0; // exists the program
}
