# include <stdio.h>
void merge(int a[], int l, int m, int r)
{
    int i,j,k;
    int n1 = m-l+1;
    int n2 = r - m;

    int L[n1], R[n2];

    for(i = 0; i < n1; i++)
    {
        L[i] = a[l+i];
    }
    for(j = 0; j < n2; j++)
    {
        R[j] = a[m+1+j];
    }

    i = 0, j = 0, k = l;
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}

void MS(int a[], int i, int j)
{
    if(i < j)
    {
        int mid = i + (j-i)*0.5;

        MS(a, i , mid);
        MS(a, mid + 1, j);

        merge(a, i, mid, j);
    }
}

int main()
{
    printf("Enter the size of array: ");
    int n;
    scanf("%d", &n);
    int a[n];
    printf("Enter the array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    MS(a, 0, n-1);
    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
