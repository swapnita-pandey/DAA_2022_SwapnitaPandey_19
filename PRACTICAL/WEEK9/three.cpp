#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    int key;
    for (int i = 0; i < n; i++)
    {
        cin >> key;
        pq.push(key);
    }
    int c = 0;
    while (pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int sum = a + b;
        c += sum;
        pq.push(sum);
    }
    cout << c << endl;
}