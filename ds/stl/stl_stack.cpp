#include<iostream>
#include<stack>
using namespace std;


//there is a special way to print stack as there are no begin() and end() in it.
// Stack and Queue are derived containers. Hence they have a specific way of printing elements.

void print(stack<int> &s)
{
    while(!s.empty())// checking if the stack is empty or not
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}


int main()
{
    stack<int> s;// Stack declaration.
    int n,item;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>item;
        s.push(item);//Push into stack
    }

    // print(s);//function call for printing the stack.
    cout<<endl;
    cout<< s.size()<< endl;// size of stack
    s.pop();//pop element from stack.
    cout<< s.top();// look at top element of stack
     cout<<endl;
    cout<< s.size()<< endl;
   return 0;
}