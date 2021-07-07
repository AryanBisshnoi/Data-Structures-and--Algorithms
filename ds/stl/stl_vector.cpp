#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;//creating a vector.
    printf("enter size of vector\n");
    int i,n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        v.push_back(x);//entering elements in a vector.
    }
    vector<int> :: iterator p=v.begin();//iterator for traversing a vector.
    while(p!=v.end())//begin() and end() are used to traverse through vector.
    {
        printf("%d",*p);
        p++;
    }

    printf("\n%d\n",v[2]);//random access can be done in vectors as is done on arrays.
    printf("size is %d\n",v.size());//size of the vector.
    printf("capacity is %d\n",v.capacity());// capacity of the vector.
    printf("first element in the vector is %d\n",v.front());// first element of the vector.
    printf("last element of the vector is %d\n",v.back());// last element of the vector.

    return 0;
}
