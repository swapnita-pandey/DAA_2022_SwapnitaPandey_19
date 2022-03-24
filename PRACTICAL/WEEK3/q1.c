#include<stdio.h>
int main()
{
    int n,temp = 0,c = 0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            c++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n%d",c);



























}
