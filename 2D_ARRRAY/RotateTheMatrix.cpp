//OPTIMIZED
#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat) {
    int n = mat.size();

    // Step 1: Transpose the matrix
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(mat[i].begin(), mat[i].end());
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    // Rotate
    rotateMatrix(mat);

    // Output rotated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


//BRUTE
#include <bits/stdc++.h>
using namespace std;

// Brute force rotation: create a new matrix
vector<vector<int>> rotateMatrix(vector<vector<int>>& matrix, int n) {
    // Create a temporary matrix to store rotated version
    vector<vector<int>> rotated(n, vector<int>(n, 0));

    // Place elements in rotated positions
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotated[j][n - 1 - i] = matrix[i][j];
        }
    }

    return rotated;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Rotate
    vector<vector<int>> result = rotateMatrix(matrix, n);

    // Output rotated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
