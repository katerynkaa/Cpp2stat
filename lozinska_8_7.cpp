#include <stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int determinant(double matrix[5][5], int n) {
    int det = 0;
    double submatrix[5][5];

    if (n == 1) return matrix[0][0];
    if (n == 2) return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
    else {
        for (int p = 0; p < n; p++) {
            int sub_row = 0;
            for (int row = 1; row < n; row++) {
                int sub_col = 0;
                for (int col = 0; col < n; col++) {
                    if (col == p)
                        continue;
                    submatrix[sub_row][sub_col] = matrix[row][col];
                    sub_col++;
                }
                sub_row++;
            }
            det = det + (pow(-1, p) * matrix[0][p] * determinant(submatrix, n - 1));
        }
    }
    return det;
}
int main() {
    int n, i, j;
    double matrix[5][5];
    cout << "size of the matrix(up to 5) = ";
    cin >> n;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            cout << "element [" << i<< "][" << j << "]" << " ";
            cin >> matrix[i][j];
        }
            
    cout << "The entered matrix is:" << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    cout << "Determinant:" << determinant(matrix, n);
}