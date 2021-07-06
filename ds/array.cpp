#include<iostream>
using namespace std;
int main()
{
    cout<<"HEllo World!"<<endl;
    //static array initialization.
    /*int a[3];
    for(int i=0;i<3;i++)
    cin>>a[i];
    for(int i=0;i<3;i++)
    cout<<a[i];*/

    //dynamic array initialization.
    int *a=new int[3];
    for(int i=0;i<3;i++)
    cin>>a[i];
    for(int i=0;i<3;i++)
    cout<<a[i];
    delete [] a;// when we dynamically allocate memory to an array then we also need to delete the array from memory as well.
    return 0;
}

//g++ -o array array.cpp
//array