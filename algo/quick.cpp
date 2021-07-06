#include<iostream>

int partition(int *a, int l, int h)
{
    int i=l,j=h,pivot=a[l],temp;
    while(i<j)
    {
        do
        {
            i++;
        }while(a[i]<=a[l]);
        do
        {
            j--;
        }while(a[j]>a[l]);
        if(i<j)
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    temp=a[j];
    a[j]=a[l];
    a[l]=temp;
    return j;
}

void quick_sort(int *a, int l, int h)
{
    if(l<h)
    {
        int j=partition(a,l,h);
        quick_sort(a,l,j);
        quick_sort(a,j+1,h);
    }
}



int main()
{
    int n;
    scanf("%d",&n);
    int *a=new int[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    quick_sort(a,0,n);
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}