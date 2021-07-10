#include<iostream>
using namespace std;


void merge(int *a, int l, int mid, int h)
{
    int p,q,i,j,k;
    p=mid-l+1;
    q=h-mid;
    int b[p],c[q];
    for(i=0;i<p;i++)
    b[i]=a[l+i];
    for(i=0;i<q;i++)
    c[i]=a[mid+1+i];

    i=0,j=0,k=l;// k is equal to l.
    while(i<p && j<q)
    {
        if(b[i]<=c[j])
        {
            a[k]=b[i];
            k++;
            i++;
        }
        else if(b[i]>c[j])
        {
            a[k]=c[j];
            k++;
            j++;
        }
    }
    while(i<p)
    {
        a[k]=b[i];
        i++;
        k++;
    }
    while(j<q)
    {
        a[k]=c[j];
        j++;
        k++;
    }
}


void merge_sort(int *a, int l, int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>> a[i];
    }

    merge_sort(a,0,n-1);

    for(i=0;i<n;i++)
    {
        cout<< a[i]<<" ";
    }

    return 0;
}

//o(nlogn) in all cases. But, quick sorts space complexity is better than merge sort. 