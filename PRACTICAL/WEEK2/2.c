#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array: ");
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    if(n > 3)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                for(int k = j+1; k < n; k++)
                {
                    if((a[i] + a[j]) == a[k])
                        printf("%d %d %d \n", i , j , k);
                }
            }
        }
    }
}
