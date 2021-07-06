#include<stdio.h>
#include <limits.h>
#include"queue.h"
using namespace std;

int main()
{
    queue<int> q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    printf("%d ",q.top());
    q.pop();

    printf("%d ",q.top());
    q.pop();

    printf("%d ",q.top());
    q.pop();

    printf("%d ",q.top());
    q.pop();

    printf("%d ",q.top());
    q.pop();
    
    printf("%d ",q.top());
    q.pop();


    return 0;
}