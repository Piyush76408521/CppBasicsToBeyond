#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;  // Declaration of number n
    cin >> n;
    vector<vector<int>> matA(n, vector<int>(n, 0));     // Declaration and initialize of matA
    vector<vector<int>> matB(n, vector<int>(n, 0));     // Declaration and initialize of matB
    vector<vector<int>> newmatAB(n, vector<int>(n, 0)); // Declartion and initialize of newmatAB
    for (int i = 0; i < n; i++)     // For number of rows of matA
    {
        for (int j = 0; j < n; j++)  // For number of columns of matA
        {
            int t;    // Declaration of t (simple test case)
            cin >> t;  
            matA[i][j] = t;  // Equalising the value of t and matrixA
        }
     }
    for (int i = 0; i < n; i++)  // For number of rows of matB
    {
        for (int j = 0; j < n; j++)  // For number of columns of matB
        {
            int t;
            cin >> t;
            matB[i][j] = t;
        }
    }
    for (int i = 0; i < n; i++)   // For number of columns of newmatAB
    {
        for (int j = 0; j < n; j++)   // For number of columns of newmatAB
        {
            newmatAB[i][j] = 0;
            for (int k = 0; k < n; k++)   // For initiate the value of rows and columns.
            {
                newmatAB[i][j] = newmatAB[i][j] + (matA[i][k] * matB[k][j]);  // Formula for forming newmatrix.
            }
        }
    }
    for (int i = 0; i < n; i++)   // For number of rows of newmatAB
    {
        for (int j = 0; j < n; j++)   // For number of columns of newmatAB
        {
            cout << newmatAB[i][j] << " ";
        }
        cout << endl;
    }
    return 0; // Exists the program
}
