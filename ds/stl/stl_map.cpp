#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
    map<string,int> m;
    m["aryan"]=4;
    m["arav"]=8;
    m["sanchita"]=1;
    m["anuj"]=6;

    map<string,int> :: iterator p=m.begin();
    map<string,int> :: iterator q=m.begin();

//Map has got two subparts. 1) index caalled as first. 2) Data called as second.
    while(p!=m.end())
    {
        cout<< p->first<<" "; 
        p++;
    }

    cout<<endl;

    while(q!=m.end())
    {
        cout<< q->second<<" ";
        q++;
    }
    
    return 0;
}