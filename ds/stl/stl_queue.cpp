#include<iostream>
#include<queue>
using namespace std;

// Queue has a special whay of printing elements.
// Stack and Queue are derived containers. Hence they have a specific way of printing elements.
void print(queue<int> &q)
{  
    while(!q.empty())
    {
        printf("%d ",q.front());
        q.pop();
    }
}


int main()
{

    queue<int> q;// Declaring Queue.
    int n,i,item;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin >> item;
        q.push(item);//Push element to queue.
    }
    cout<< q.size()<< endl;// SIze of queue
  
    cout<< q.front();// First element of queue.
    cout<< endl;
    cout<< q.back() << endl;// Last element of queue.
    q.pop();//Pop elemnt from queue.
    cout<< q.front();
    cout<< endl;
    
    print(q);
    return 0;
}