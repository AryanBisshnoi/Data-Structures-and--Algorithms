#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(7);
    v.push_back(3);
    v.push_back(2);

    //sorting algo.
    sort(v.begin(), v.end());

    vector<int>::iterator p=v.begin();
    while(p!=v.end())
    {
        cout<<*p;
        p++;
    }cout<<endl;

    //binary search.
    cout<< binary_search(v.begin(),v.end(),3)<<endl;

    //maximum of two elements.
    int a=2,b=5;
    cout<< max(a,b)<<endl;

    //swaping data of two elements.
    swap(a,b);

    //minimum of two data.
    cout<< min(a,b)<<endl;
    cout<<a<<" "<<b<<endl;

    return 0;
}