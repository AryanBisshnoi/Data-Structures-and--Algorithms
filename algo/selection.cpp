#include<iostream>
#include<limits.h>

void selection_sort(int *a,int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    int *a=new int[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    selection_sort(a,n);
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}