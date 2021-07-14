#include<iostream>
using namespace std;

int product(int n, int p)
{
    if(p==0)
    {
        return 1;
    }
    int ans = n*product(n,p-1);
    return ans;
}

int main()
{
    int n,p;
    cin>>n>>p;
    int res=product(n,p);
    cout<<res<<endl;
    return 0;
}