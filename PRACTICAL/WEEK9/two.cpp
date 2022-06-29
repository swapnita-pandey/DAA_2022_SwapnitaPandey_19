#include <iostream>
using namespace std;
struct Capa
{
    int value;
    int weight;
    float ratio;
    float unit_taken;
    int no;
};
int main()
{
    int n, capacity;
    cin >> n;
    Capa c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i].weight;
        c[i].unit_taken = 0;
        c[i].no = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i].value;
    }
    cin >> capacity;
    for (int i = 0; i < n; i++)
    {
        c[i].ratio = (float)c[i].value / c[i].weight;
    }
    Capa temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (c[i].ratio < c[j].ratio)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (capacity == 0)
        {
            break;
        }
        if (c[i].weight <= capacity)
        {
            capacity -= c[i].weight;
            c[i].unit_taken = 1;
        }
        else if (c[i].weight > capacity)
        {
            c[i].unit_taken = (float)capacity / c[i].weight;
            capacity = 0;
        }
    }
    float val = 0;
    for (int i = 0; i < n; i++)
    {
        val += c[i].unit_taken * c[i].value;
        if (c[i].unit_taken)
        {
            cout << c[i].no << "-" << c[i].weight << endl;
            ;
        }
    }
    cout << val;
}