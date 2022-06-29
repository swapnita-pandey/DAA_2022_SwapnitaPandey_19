#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int k_edge(vector<vector<int>> vec, int n, int u, int v, int k)
{
    if (k == 0 && u == v)
        return 0;
    if (k == 1 && vec[u][v])
        return vec[u][v];
    if (k <= 0)
        return -1;
    int res = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (vec[u][i] && u != i && v != i)
        {
            int rec_res = k_edge(vec, n, i, v, k - 1);
            if (rec_res != -1)
            {
                res = min(res, vec[u][i] + rec_res);
            }
        }
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v;
    // int v[n][n+1];
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int t;
            cin >> t;
            temp.push_back(t);
            // cin>>v[i][j];
        }
        v.push_back(temp);
    }
    int src, des, k;
    cin >> src >> des >> k;
    int res = k_edge(v, n, src - 1, des - 1, k);
    cout << res << endl;
}