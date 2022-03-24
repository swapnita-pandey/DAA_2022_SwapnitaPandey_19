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
    for(int i = 1; i < n; i++)
    {
        int j;
        int key = a[i];
        for(j = i - 1; (key < a[j]) && (j >= 0); j--)
        {
            a[j + 1] = a[j];
            c++;
        }
        a[j+1] = key;
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n%d", c);
}
