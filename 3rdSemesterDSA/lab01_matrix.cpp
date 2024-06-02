/**
 * author: dween_md
 * created: 2024-05-31    01:23:55
 **/
#include <bits/stdc++.h>
#include <windows.h>
#define ll long long int
#define asc(v) sort(v.begin(), v.end()) // vectors, pairs, tuples, string
#define dsc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;

int main()
{
    cout << "Enter two matrices for summation and subtraction\n";
    Sleep(1000);
    cout << "......now enter row and column of matrices.....\n";

    int row, col;
    cin >> row >> col;

    int mat1[row][col];
    int mat2[row][col];
    int ans[row][col];
    Sleep(1500);

    cout << "Input for matrix 1" << "\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> mat1[i][j];
        }
    }

    Sleep(1500);
    cout << "Input for matrix 2" << "\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> mat2[i][j];
        }
    }

    Sleep(1500);
    cout << "Summation of matrix 1 and matrix 2" << "\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[i][j] = mat1[i][j] + mat2[i][j];
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    Sleep(1500);
    cout << "Subtraction of matrix 1 and matrix 2" << "\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[i][j] = mat1[i][j] - mat2[i][j];
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    Sleep(1500);
    cout << "Multiplication of matrix 1 and matrix 2" << "\n";
    if (row != col)
    {
        cout << "Matrix multiplication not possible with non-square matrices." << endl;
    }
    else
    {
        int mult[row][col]; 
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                mult[i][j] = 0;
                for (int k = 0; k < col; k++) 
                {
                    mult[i][j] += mat1[i][k] * mat2[k][j];
                }
                cout << mult[i][j] << " ";
            }
            cout << "\n";
        }
    }

    Sleep(1500);
    cout << "Transpose of matrix 1" << "\n";
    for (int i = 0; i < col; i++) 
    {
        for (int j = 0; j < row; j++)
        {
            ans[i][j] = mat1[j][i];
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
