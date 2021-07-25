#include<iostream>
#include<queue>

using namespace std;

void printBfs(int **a, int n, bool *visited, int i)
{
    queue<int> q;
    q.push(i);
    visited[i]=true;
    while(!q.empty())
    {
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        for(int i=0;i<n;i++)
        {
            if(a[x][i]==1 && visited[i]==false)
            {
                q.push(i);
                visited[i]=true;
            }
        }
    }
}

void bfs(int **a, int n)
{
    bool *visited = new bool[n];
    for(int i=0;i<n;i++)
    visited[i]=false;
    for(int i=0;i<n;i++)
    {
        if(visited[i]==false)
        {
            printBfs(a,n,visited,i);
        }
    }
    delete [] visited;
}

int main()
{
    int n, e, i, j, fromA, toB;
    cout<< "Enter number of vertices and edges"<<endl;
    cin>>n>>e;
    int **a = new int*[n];
    for(i=0;i<n;i++)
        *(a+i) = new int[n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            a[i][j]=0;
    
    for(i=0;i<e;i++)
    {
        cout<<"enter points which are connected by edges"<<endl;
        cin>>fromA>>toB;
        a[fromA][toB]=1;
        a[toB][fromA]=1;
    }
    cout<<"BFS: "<<endl;
    bfs(a,n);

    for(i=0;i<n;i++)
    {
        delete[] *(a+i);
    }
    return 0;
}