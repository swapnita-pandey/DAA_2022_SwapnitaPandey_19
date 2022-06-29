#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool checkpath(int n, vector<vector<int>> v)
{
    int so = 0;
    // cin>>so;
    vector<int> col(n, -1);
    col[so] = 1;
    queue<int> q;
    q.push(so);
    while (!q.empty())
    {
        so = q.front();
        q.pop();
        if (v[so][so] == 1)
        {
            return false;
        }
        for (int i = 0; i < n; i++)
        {
            if (v[so][i] && col[i] == -1)
            {
                col[i] = 1 - col[so];
                q.push(i);
            }
            else if (v[so][i] && col[i] == col[so])
            {
                return false;
            }
        }
    }
    return true;
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
    bool ch = checkpath(n, v);
    if (ch)
    {
        cout << "biparite";
    }
    else
    {
        cout << "not bipartite";
    }
}