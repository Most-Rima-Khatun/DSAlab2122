#include<bits/stdc++.h>
using namespace std;
const int MAX = 100;

void displayAdjacentVertex(int adjMatrix[MAX][MAX],int n)
{
    for(int i = 0; i < n ; i++)
    {
        cout<<"Adjacency vertex of V "<< i + 1<<":"<<"\n";

        for(int j = 0; j < n; j++)
        {
            if(adjMatrix[i][j]==1)
            {
                cout<<"v"<<j+1<<" ";
            }
        }cout<<"\n";
    }
}
void matrixMultiply(int a[MAX][MAX],
                    int b[MAX][MAX],
                    int result[MAX][MAX],
                    int n)
{
    int temp[MAX][MAX];
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            temp[i][j] = 0;
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            for(int  k = 0 ; k < n; k++)
            {
                temp[i][j] = temp[i][j] + a[i][j] * b[i][j];
            }
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            result[i][j] = temp[i][j];
        }
    }
}

void matrixPower(int adjMatrix[MAX][MAX],int result[MAX][MAX],int n,int power)
{
    int temp[MAX][MAX];
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            result[i][j] = adjMatrix[i][j] ;
        }
    }
    for(int  p = 1; p <= power ; p++)
    {
        matrixMultiply(result,adjMatrix,temp,n);
         for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                result[i][j] = temp[i][j] ;
            }
        }
    }
}

void displayPath(int adjMatrix[MAX][MAX],int n,int length)
{
    int result[MAX][MAX];
    matrixPower(adjMatrix,result,n,length);

    cout<<"Number of paths of length"<<length<<"from vi to vj"<<endl;

     for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cout<<result[i][j] <<" " ;
        }cout<<"\n";
    }
}

void pathmatrix(int adjMatrix[MAX][MAX],int result[MAX][MAX],int n)
{
    int temp[MAX][MAX];

    matrixPower(adjMatrix,result,n,4);
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(result[i][j] > 0)
            {
                temp[i][j] = 1;
            }
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
           if(result[i][j] > 1)
           {
            result[i][j] = temp[i][j];
           }
        }
    }

}
int main()
{
    int n;
    cout<<"enter the number of vertex of n:"<<"\n";
    cin>>n;

    int adjMatrix[MAX][MAX];
    int result[MAX][MAX];

    int c = 0;
    cout << "Enter the adjacency matrix:"<<"\n";
    for(int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n ;j++)
        {
            cin>>adjMatrix[i][j];
        }
    }
    pathmatrix(adjMatrix,result,n);

    cout<<" The path matrix is : "<<"\n";
    for(int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n ;j++)
        {
           if(result[i][j] == 1)
           {
            c++;
           }
           cout<<result[i][j]<<" ";
        }cout<<"\n";
    }
    if(c == (n*n))
    {
        cout<<"strongly connected "<<"\n";
    }else{
        cout<<"weakly connected"<<"\n";
    }


    return 0;
}