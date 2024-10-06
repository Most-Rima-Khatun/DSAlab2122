#include<bits/stdc++.h>
using namespace std;
#define INF 99999;

void warshall(int graph[100][100],int n){
    int temp[100][100];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n ; j++)
        {
            temp[i][j] = graph[i][j];
        }
    }
    for(int k = 0; k < n ; k++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n ; j++)
            {
                temp[i][j] = min(temp[i][j],(temp[i][k]+temp[k][j]));
            }
        }
    }
    cout<<"the sortest path:"<<"\n\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n ; j++)
        {
            if(temp[i][j] == 99999)
            {
                cout<<"INF"<<" ";
            }else
            {
                cout<<temp[i][j]<<" ";
            }
        }cout<<"\n";
    }
    cout<<"the path matrix:"<<"\n\n";
    int count_path = 1;
    for(int k = 0; k < n ; k++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n ; j++)
            {
                temp[i][j] = temp[i][j]||(temp[i][k]&&temp[k][j]);
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n ; j++)
        {
            cout<<temp[i][j]<<" ";
        }cout<<"\n";
    }
    
}
int main()
{
    int n;
    cout<<"enter the number of nodes:"<<"\n\n";
    cin>>n;
    cout<<n<<endl;
    int graph[100][100];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n ; j++)
        {
            cin>>graph[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n ; j++)
        {
            if(graph[i][j] == 0)
            {
                graph[i][j] = 99999;
            }
        }
    }
    cout<<"the adjacency matrix is :"<<"\n\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n ; j++)
        {
            if(graph[i][j]!=99999)
            cout<<graph[i][j]<<"     ";
            else
            cout<<graph[i][j]<<" ";
        }cout<<"\n";
    }
    warshall(graph,n);
    
    return 0;
}