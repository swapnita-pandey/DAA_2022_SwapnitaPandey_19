#include <iostream>
using namespace std;
int main()
{
    int t, key, n;
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
        int mid;
        int l = 0, h = n - 1, flag = 0, count = 0;
        while (l <= h)
        {
            count++;
            mid = (l + h) / 2;
            if (key == arr[mid])
            {
                flag = 1;
                cout << "Present " << count << endl;
                break;
            }
            else if (key < arr[mid])
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
            cout << "Not Present " << count << endl;
        }
    }
}