#include<iostream>
#include <limits.h>
#include "stack.h"

using namespace std;
int main()
{
    stack<char> s(5);
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    s.push('e');
    s.push('f');


    printf("%c ",s.top());
    s.pop();

    printf("%c ",s.top());
    s.pop();
    
    printf("%c ",s.top());
    s.pop();

    printf("%c ",s.top());
    s.pop();
    
    printf("%c ",s.top());
    s.pop();

    printf("%c ",s.top());
    s.pop();


    return 0;
}