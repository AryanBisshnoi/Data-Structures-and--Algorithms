#include <iostream>
#include <limits.h>

int binary_search(int *a, int n, int key)
{
    int mid, l = 0, h = n;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (a[mid] == key)
        {
            return mid;
        }

        else if (a[mid] < key)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return INT_MIN;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int x = binary_search(a, n - 1, 2);
    if (x != INT_MIN)
        printf("key is at index %d\n", x);
    else
        printf("Element not found\n");

    return 0;
}