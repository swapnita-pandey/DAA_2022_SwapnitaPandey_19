#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr1[i] = arr[i];
    }
    sort(arr1, arr1 + n);
    reverse(arr1, arr1 + n);
    int n1 = arr1[0] + 1;
    vector<int> count(n1, 0);
    for (int i = 0; i < n; i++)
    {
        count[arr[i]] += 1;
        if (count[arr[i]] > (n / 2))
        {
            cout << "yes";
            cout << arr[i];
            break;
        }
    }
}