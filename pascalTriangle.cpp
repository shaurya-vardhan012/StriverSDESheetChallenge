#include<bits/stdc++.h>
vector<vector<int>> pascalTriangle(int n)
{
    vector<vector<int>> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i].resize(i + 1);
        ans[i][i] = ans[i][0] = 1;
        for (int j = 1; j < i; j++)
        {
            ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
        }
    }
    return ans;
}
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr;

    arr = pascalTriangle(n);
    return 0;
}