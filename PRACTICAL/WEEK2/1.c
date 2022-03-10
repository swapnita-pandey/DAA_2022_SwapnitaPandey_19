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
    printf("Enter key : ");
    scanf("%d", &k);
    for(int i = 0; i < n; i++)
    {
        if(a[i] == k)
            c++;
    }
    if(c == 0)
        printf("Not found");
    else
        printf("%d has %d copies in the array", k, c);
}
