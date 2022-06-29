#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// vector<vector<int> > v;
void checkpath(int n, vector<vector<int>> v)
{
    int so, des;
    vector<bool> vis(n, false);
    cin >> so >> des;
    stack<int> st;
    st.push(so);
    while (!st.empty())
    {
        int flag = 0;
        so = st.top();
        if (!vis[so])
        {
            cout << so << endl;
            vis[so] = true;
        }
        for (int i = 0; i < n; i++)
        {
            if (v[so][i] && !vis[i])
            {
                flag = 1;
                st.push(i);
            }
        }
        if (flag == 0)
        {
            st.pop();
        }
        if (des == so)
        {
            cout << "path exists";
            return;
        }
    }
    cout << "path doesn't exists";
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
    checkpath(n, v);
}