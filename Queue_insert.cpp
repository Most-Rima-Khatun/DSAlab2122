#include<bits/stdc++.h>
using namespace std;
#define CAP 50
int queueI[CAP+1];
int rear = 0;

void queue_insert(int data)
{
    if(CAP == rear)
    {
        cout<<"queue is overflow"<<endl;
        return ;
    }else
    {
        rear++;
        queueI[rear] = data;    
        cout<<queueI[rear]<<endl;
    }
}
int queue_del()
{
    int front = 0;
    if(CAP == 0)
    {
        cout<<"underFlow"<<endl;
        return -1;
    }
    else
    {
        for(int i = 0 ; i < rear-1;i++)
        {
           front = queueI[i] =queueI[i+1];
        }
        rear--;
    }
    return front;
}
int main()
{
    int data;
    cin>>data;
   queue_insert(data);
    
    return 0;
}