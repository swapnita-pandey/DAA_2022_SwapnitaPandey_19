#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool checkpath(int n, vector<vector<int>> v)
{
    int so = 0;
    stack<int> st;
    st.push(so);
    vector<bool> vis(n, false);
    int flag[n] = {-1};
    flag[so] = 0;
    while (!st.empty())
    {
        int f = 0;
        so = st.top();
        flag[so] = 0;
        if (!vis[so])
        {
            // cout<<so<<endl;
            vis[so] = true;
        }
        for (int i = 0; i < n; i++)
        {
            if (v[so][i] && !vis[i])
            {
                f = 1;
                st.push(i);
            }
            if (vis[i] && v[so][i])
            {
                if (flag[i] == 0)
                {
                    return true;
                }
            }
        }
        if (f == 0)
        {
            st.pop();
            flag[so] = 1;
        }
    }
    return false;
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
        cout << "cycle exists";
    }
    else
    {
        cout << "no cycle exists";
    }
}