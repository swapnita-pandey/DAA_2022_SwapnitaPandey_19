void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int a[], int p, int q)
{
    int x = a[p];
    int i = p;
    for(int j = p + 1; j <= q; j++)
    {
        if(a[j] <= x)
        {
            i = i + 1;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[p], &a[i]);
    return i;
}

void QS(int a[], int p, int q)
{
    if(p < q)
    {
        int m = partition(a, p, q);
        QS(a, p, m-1);
        QS(a, m+1, q);
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
    printf("Enter the value of k: ");
    int k;
    scanf("%d", &k);
    QS(a, 0, n-1);
    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("kth smallest element: %d \nkth largest element: %d", a[k-1], a[n-k]);
}
