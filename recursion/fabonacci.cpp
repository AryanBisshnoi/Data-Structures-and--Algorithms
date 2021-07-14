#include<iostream>
using namespace std;

int fabonacci(int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n==0)
    {
        return 0;
    }
    int res=fabonacci(n-1)+fabonacci(n-2);
    return res;
}

int main()
{
    int n;
    cin>> n;
    int result=fabonacci(n);
    cout<<result<<endl;
    return 0;
}
