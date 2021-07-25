#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //Max heap.
    priority_queue<int> maxheap;
    maxheap.push(13);
    maxheap.push(7);
    maxheap.push(1);
    maxheap.push(19);
    while(!maxheap.empty())
    {
        cout<<maxheap.top()<<" ";
        maxheap.pop();
    }
    cout<<endl;

    //Min heap.
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(13);
    minheap.push(7);
    minheap.push(1);
    minheap.push(19);
    while(!minheap.empty())
    {
        cout<<minheap.top()<<" ";
        minheap.pop();
    }
    return 0;
}