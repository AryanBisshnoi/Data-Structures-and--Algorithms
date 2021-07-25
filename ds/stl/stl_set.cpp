#include<iostream>
#include<set>

using namespace std;

int main()
{
    //greater<int> is used when elements of set need to be arranged in decending order.
    set<int, greater<int>> s;
    int n,i,item;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>> item;
        s.insert(item);
    }

    set<int> :: iterator p=s.begin();
    while(p!=s.end())
    {
        cout<< *p<<" ";
        p++;
    }
    cout<<endl;
    cout<< s.size()<< endl;
    s.erase(2);
    cout<< s.size()<< endl;
    s.erase(1);
    cout<< s.size()<< endl;

    return 0;
}