#include<iostream>
#include<list>
using namespace std;


void print(list<int> &l)//taking stl containers as parameters to functions.
{
    list<int> :: iterator p = l.begin();
    while(p!=l.end())
    {
        cout << *p <<" ";
        p++;
    }
}


int main()
{
    list<int> l1;//declaring list.
    list<int> l2;
    int item,i,n;
    cout<<"Enter nuber of elements\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>item;
        l1.push_back(item);//entering elements from behind.
    }
    print(l1);
    cout<<"\n"<<l1.size()<<endl;//size of the list.
    l1.reverse();//reversing the list.
    cout<<"After reversing the list it becomes: "; 
    print(l1);
    cout<<endl;
    l1.sort();//sorting the list.
    cout<<"After sorting the list it becomes: "; 
    print(l1);
    cout<<endl;
    cout<<"enter elements in second list."<<endl;
    for(i=0;i<n;i++)
    {
        cin>>item;
        l2.push_front(item);//entering elements from front which makes the list reverse.
    }
    cout<<"Elements in second list are: "<<endl;
    print(l2);
    l2.sort();
    cout<<"After merging both lists."<<endl;
    l1.merge(l2);//merging list2 in list1.
    print(l1);
    cout<<endl;
    //Deleting elements from the list.
    l1.pop_back();//deleting from behind. 
    l1.pop_front();//deleting from front.
    l1.remove(3);//deleting all occurences of 3 in the list.
    print(l1);

    return 0;
}