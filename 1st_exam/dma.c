int main()
{
    int *ptr, n, i, j, temp;
    printf("Enter the amount of numbers:\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i)); // &arr[i]
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    printf("The sorted arrays are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }
}