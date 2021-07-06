#include<iostream>
#include<limits.h>
#include "stack.h"
using namespace std;


int paranthesis(char *exp,int count)
{
    stack<char> s(count);
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        s.push('(');
        else if(exp[i]==')')
        {
            if(s.isEmpty())
            return 0;
            s.pop();
        }
    }
    if(s.isEmpty())
    return 1;
    else
    return 0;

}

int main()
{
    char c[50];
    int count=0;
    gets(c);
    for(int i=0;c[i]!='\0';i++)
    count++;
    int x=paranthesis(c,count);
    if(x==0)
    printf("expression isn't balanced\n");
    else
    printf("expression is balanced.\n");
    return 0;
}