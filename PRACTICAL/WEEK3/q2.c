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
    for(int i = 0; i < n - 1; i++)
    {
        int min = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < min)
            {
                min = j;
                temp = a[j];
                a[j] = a[min];
                a[min] = temp;
            }
            c++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n%d", c);
}
