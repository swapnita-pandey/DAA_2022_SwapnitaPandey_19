#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isvalidedge(int u, int v, vector<bool> mst)
{
    if (u == v)
        return false;
    if (mst[u] && mst[v])
        return false;
    return true;
}
void findcost(int n, vector<vector<int>> v)
{
    int so;
    int min = INT_MAX;
    vector<bool> mst(n, false);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] < min)
            {
                if (i != j)
                {
                    min = v[i][j];
                    so = i;
                }
            }
        }
    }
    mst[so] = true;
    int c = 0;
    int mincost = 0;
    while (c < n - 1)
    {
        int min = INT_MAX;
        // mst[so]=true;
        int a = -1, b = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[i][j] < min && v[i][j])
                {
                    if (isvalidedge(i, j, mst))
                    {
                        min = v[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }
        if (b != -1 && a != -1)
        {
            mincost += min;
            mst[a] = true;
            mst[b] = true;
            c++;
            cout << a << " " << b << " " << min << endl;
        }
    }
    cout << mincost << endl;
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
    findcost(n, v);
}