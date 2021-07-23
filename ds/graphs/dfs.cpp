#include<iostream>
using namespace std;

void printDfs(int **a, int n, bool *visited, int x)
{
    int i;
    cout<<x<<" ";
    visited[x]=true;
    for(i=0;i<n;i++)
    {
        if(a[x][i]==1 && visited[i]==false)
        {
            printDfs(a,n,visited,i);
        }
    }
}

void dfs(int **a, int n)
{
    int i;
    bool *visited = new bool[n];
    for(i=0;i<n;i++)
        visited[i]=false;
    for(i=0;i<n;i++)
    {
        if(visited[i]==false)
        {
            printDfs(a,n,visited,i);
        }
    }
    delete[] visited;
}

int main()
{
    int n,e,fromA,toB,i,j;
    cout<<"enter vertices and edges"<<endl;
    cin>> n>>e;
    int **a = new int*[n];
    for(i=0;i<n;i++)
        *(a+i) =  new int[n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            a[i][j]=0;

    for(i=0;i<e;i++)
    {
        cout<< "enter vertices from which are connected by edges"<<endl;
        cin>>fromA>>toB;
        a[fromA][toB]=1;
        a[toB][fromA]=1;
    }
    cout<<"DFS: ";
    dfs(a,n);

    for(i=0;i<n;i++)
    delete[] *(a+i);
    
    return 0;
}