#include<iostream>
using namespace std;


int add(int n)
{
    if(n==1)
    {
        return 1;
    }
    int result = n + add(n-1);
    return result;
}


int main()
{
    //n + n-1 + n-2 + n-3 + n-4 + ............. + 2 + 1
    int n;
    cin>> n;
    int sum=add(n);
    cout<< sum<< endl; 

    return 0;
}