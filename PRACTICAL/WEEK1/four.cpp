#include <iostream>
using namespace std;
void binarysearch(int[], int, int, int, int);
int min(int, int);
int main()
{
    int t, key, n, count;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> key;
        if (arr[0] == key)
        {
            cout << "Present 1";
        }
        else
        {
            int i = 1;
            count = 0;
            while (i < n && arr[i] <= key)
            {
                count++;
                i = i * 2;
            }
            binarysearch(arr, i / 2, min(i, n - 1), key, count + 1);
        }
    }
}
void binarysearch(int arr[], int l, int h, int k, int count)
{
    int flag = 0, mid;
    while (l <= h)
    {
        count++;
        mid = (l + h) / 2;
        if (arr[mid] == k)
        {
            cout << "Present " << count;
            flag = 1;
            break;
        }
        else if (arr[mid] > k)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (flag == 0)
    {
        cout << "Not Present " << count;
    }
}
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}