#include <stdio.h>
int main()
{
    int n,k, c = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array: ");
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the key: ");
    scanf("%d", &k);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(((a[i] - a[j]) == k))
            {
                 c++;
            }
        }
    }
    printf("%d", c);
}
