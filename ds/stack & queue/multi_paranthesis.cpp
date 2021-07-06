#include<iostream>
#include "stack.h"
#include<string.h>
#include<limits.h>
using namespace std;


int paranthesis(char *exp, int count)
{
    char x;
    stack<char> s(count);
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
        s.push(exp[i]);
        else if(exp[i]==')')
        {
            if(s.isEmpty())
            return 0;
            else{
                x=s.top();
                if(x=='(')
                s.pop();
                else
                return 0;
            }
        }
        else if(exp[i]==']')
        {
            if(s.isEmpty())
            return 0;
            else{
                x=s.top();
                if(x=='[')
                s.pop();
                else
                return 0;
            }
        }
        else if(exp[i]=='}')
        {
            if(s.isEmpty())
            return 0;
            else{
                x=s.top();
                if(x=='{')
                s.pop();
                else
                return 0;
            }
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
    printf("Expression is not balanced");
    else
    printf("expression is balanced");
    return 0;    
}