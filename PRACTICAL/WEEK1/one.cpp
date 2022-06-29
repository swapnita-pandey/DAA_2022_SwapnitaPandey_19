#include <iostream>
using namespace std;
int main()
{
    int t, key, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int arr[n];
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        cin >> key;
        for (int j = 0; j < n; j++)
        {
            if (key == arr[j])
            {
                flag = 1;
                cout << "Present " << (j + 1);
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Not Present " << n;
        }
    }
    return 0;
}