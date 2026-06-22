#include <iostream>
#include<vector>
using namespace std;
void matrixZeroes(vector<vector<int>>&matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> temp = matrix;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j]==0){

                for(int k=0;k<n;k++){

                    temp[i][k] = 0;

                }
                 for(int k=0;k<m;k++){

                    temp[k][j] = 0;

                }

            }

        }

    }
    matrix=temp;

}

int main() 
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
        cin>>matrix[i][j];
        }
    }
    matrixZeroes(matrix);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

        cout<<matrix[i][j]<<" ";
        }
        cout<<endl;

    }

    return 0;
}



//OPTIMIZED CODE
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
    int col0 = 1; // flag for first column

    // Step 1: Mark rows and columns
    for (int i = 0; i < n; i++) {
        if (matrix[i][0] == 0) col0 = 0; // if any element in first column is 0

        for (int j = 1; j < m; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;   // mark row
                matrix[0][j] = 0;   // mark column
            }
        }
    }

    // Step 2: Use marks to set zeros (skip first row & col for now)
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Step 3: Handle first row separately
    if (matrix[0][0] == 0) {
        for (int j = 0; j < m; j++) {
            matrix[0][j] = 0;
        }
    }

    // Step 4: Handle first column separately
    if (col0 == 0) {
        for (int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }

    return matrix;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    matrix = zeroMatrix(matrix, n, m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

