#include<bits/stdc++.h>
using namespace std;
void insert(int arr[],int n){
    int item = 54,j=0 ; 
    for(int  i = 0 ; i < n ; i++)
    {
        if(arr[i]>item ){j = i;break;}
    }
    int position  = j;
    n=n+1;
    for(int  i = n ; i > 0  ; i--)
    {
        if(i>=j )
        {
            arr[i+1] = arr[i];
        }
    }arr[j] = item;

    for(int i = 0; i< n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertNumPosition(int n, int arr[])
{
   
    int position = 5;
    for(int i = n; i > 0; i--)
    {
        if(i >= position)
        {
            arr[i+1] = arr[i];
        }
    }
    arr[position] = 99;
    n = n+1;
    for(int i = 0; i< n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertName(string name[],int n){
    cout<<"done";
    int j=0;
    string nam = "Rahim";
    for(int i = 0; i < n ;i++)
    {
        if(name[i]> nam)
        {
            j = i;
            break;
        }
    }
    n = n +1;
    for(int i = n;i>0;i--)
    {
        if(i>=j)
        name[i+1]=name[i];
    }name[j] = nam;
    for(int i = 0; i< n;i++)
    {
        cout<<name[i]<<" ";
    }cout<<"\n";

}
void insertStringPosition(int n,string name[])
{
   
    int position = 5;
    
    for(int  i = n-1 ; i > 0; i--)
    {
        if(i >= position)
        {
            name[i+1] = name[i];
            cout<<name[i]<<" test";
        }
    }
    name[position] = "Kahim" ;
    n = n + 1;
    for(int i = 0; i < n; i++)
    {
        cout<<name[i]<<" ";
    }
    cout<<endl;
} 

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i = 0; i< n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    string name[n];
    for(int i = 0; i< n;i++)
    {
        string nam ;
        cin>>nam;
        name[i] = nam;
    }
    
    sort(name,name+n);//.begin(),name.end());
    insert(arr,n);
    insertNumPosition(n,arr);
    insertName(name,n);
    insertStringPosition(n,name);
    return 0;
}