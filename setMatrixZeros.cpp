#include <bits/stdc++.h>

using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
    // Write your code here.
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                for (int k = 0; k < m; k++)
                {
                    if (matrix[i][k] != 0)
                    {
                        matrix[i][k] = -9999;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    if (matrix[k][j] != 0)
                    {
                        matrix[k][j] = -9999;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == -9999)
            {
                matrix[i][j] = 0;
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n,vector<int> (m));
    for (int i = 0; i < n;i++)
    {
        for (int j= 0; j < m;j++)
        {
            cin >> mat[i][j];
        }
    }
    setZeros(mat);
    for(auto it:mat)
    {
        for(auto i:it)
        {
            std::cout << i << " ";
        }
        std::cout << endl;
    }
    return 0;
}