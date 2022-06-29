#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v;
    int n;
    cin >> n;
    int f[n], t[n], c = 0;
    vector<int> vrr;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
    }
    for (int i = 0; i < n; i++)
    {
        v.push_back({f[i], f[i] - t[i], i + 1});
    }
    sort(v.begin(), v.end());
    int e = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v[i][1] >= e)
        {
            e = v[i][0];
            c++;
            vrr.push_back(v[i][2]);
        }
    }
    int s = vrr.size();
    cout << c << endl;
    for (int i = 0; i < s; i++)
    {
        cout << vrr[i] << ",";
    }
}