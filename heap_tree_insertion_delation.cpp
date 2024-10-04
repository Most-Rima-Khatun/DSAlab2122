#include<bits/stdc++.h>
using namespace std;
void heap(int arr[],int n,int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if(left < n && arr[left] > arr[largest])
    largest = left;
    if(right < n && arr[right] > arr[largest])
    largest = right;
    if(largest != i)
    {
        swap(arr[i],arr[largest]);
        heap(arr,n,largest);
    }
}

// for insertion heap 
void heapInsert(int arr[],int n,int i)
{
    int parent  = (i-1)/2;
    if(parent >= 0)
    {
       if(arr[i] > arr [parent])
       {
        swap(arr[i],arr[parent]);
        heapInsert(arr,n,parent);
       } 
    }
}
void insert(int arr[],int& n,int key){
    n = n + 1;
    arr[n-1] = key ;
    heapInsert(arr,n,n-1);
}

void deleteRoot(int arr[], int& n)
{
    int lastElement = arr[n-1];
    arr[0] = lastElement;
    n = n - 1;
    heap(arr,n,0);
}
void printArray(int arr[],int n)
{
    for(int i = 0; i < n; i++)
    cout<<arr[i]<<" ";
    cout<<"\n";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
    }
    int key = 8;
    n = sizeof(arr)/sizeof(arr[0]);
    insert(arr,n,key);
    deleteRoot(arr , n);
    printArray(arr,n);
    return 0;
}