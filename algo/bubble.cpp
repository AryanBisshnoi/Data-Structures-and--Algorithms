#include<iostream>
#include<limits.h>

void bubble_sort(int *a,int n)
{

    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int k=i;k<n-1-i;k++)
        {
            if(a[k]>a[k+1])
            {
                temp=a[k+1];
                a[k+1]=a[k];
                a[k]=temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter number of elements in array\n");
    scanf("%d",&n);
    int *a = new int[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    bubble_sort(a,n);
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}