#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
{
    int col0 = 1;

    // Step 1: Mark rows and columns
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                // Mark the i-th row
                matrix[i][0] = 0;

                // Mark the j-th column
                if (j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    // Step 2: Set matrix elements to 0 based on marks
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][j] != 0)
            {
                if (matrix[0][j] == 0 || matrix[i][0] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    // Step 3: Handle first row
    if (matrix[0][0] == 0)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[0][j] = 0;
        }
    }

    // Step 4: Handle first column
    if (col0 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            matrix[i][0] = 0;
        }
    }

    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    int n = matrix.size();
    int m = matrix[0].size();

    matrix = zeroMatrix(matrix, n, m);

    for (auto &row : matrix)
    {
        for (auto &x : row)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}