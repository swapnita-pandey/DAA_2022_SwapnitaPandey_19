#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t, key, jump, flag, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> key;
        jump = 0;
        flag = 0;
        if (key == arr[0])
        {
            cout << "Present 1" << endl;
        }
        else
        {
            int m = sqrt(n);
            int k = 0;
            while ((m <= (n - 1)) && (!flag))
            {
                if (key >= arr[k] && key <= arr[m])
                {
                    for (int i = k + 1; i <= m; i++)
                    {
                        jump++;
                        if (key == arr[i])
                        {
                            cout << "Present" << jump;
                            flag = 1;
                            break;
                        }
                    }
                    if (flag == 0)
                    {
                        cout << "Not Present" << jump;
                        break;
                    }
                }
                else
                {
                    jump++;
                    k = m;
                    m = m * 2;
                }
            }
            if (m > (n - 1))
            {
                m = n - 1;
                for (i = k + 1; i <= m; i++)
                {
                    // jump++;
                    if (key == arr[i])
                    {
                        cout << "Present " << jump;
                        flag = 1;
                        break;
                    }
                    jump++;
                }
                if (flag == 0)
                {
                    cout << "Not Present" << (jump - 1);
                    break;
                }
            }
        }
    }
}