#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;    // Declaration of the value n
    cin >> n; // Input of the value n
    vector<vector<int>> matA(n,vector<int>(n,0)); //Declaration of a matrixA(NOTE: That to declare a array we must always use the vector form for avoiding the errors occur during the array problem)
   for(int i=0;i<n;i++) {   // Input for rows of the matrix
        for(int j=0;j<n;j++) {     // Input for columns of the rows
            int t;                  // Declartion of t for checking the numbers in a matrix(A simple test case)
            cin >> t;
            matA[i][j]=t;            // Equating the values.
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout << matA[i][j] << " ";   // Printing the matrix
        }
        cout << endl;     // Ending the lines 
    }
    return 0;    //Exists the Program
}
