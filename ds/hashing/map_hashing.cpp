#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
    unordered_map<int, int> m;
    vector<int> v;
    int item;

    for(int i=0;i<5;i++)
    {
        cin>>item;
        v.push_back(item);
    }

    for(int i=0;i<v.size();i++)
    {
        m[v[i]]=1;
    }

    unordered_map<int,int> :: iterator p = m.begin();

    while(p!=m.end())
    {
        cout<<p->first<<" ";
        p++;
    }

    cout<<endl<<m.size()<<endl;

    if(m.count(2)>0) 
    cout<<"present"<<endl;
    else
    cout<<"not present"<<endl;

    p=m.begin();
    for(int i=0;i<2;i++)
    p++;

    m.erase(p);// erase() function takes iterator as parameter. The element to which the iterator points is erased from the map.  

    if(m.count(2)>0)// count() check whether an index in the map is present or not.
    cout<<"present"<<endl;
    else
    cout<<"not present"<<endl;
    return 0;
}

