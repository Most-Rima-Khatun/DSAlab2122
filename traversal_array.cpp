#include<bits/stdc++.h>
using namespace std;
void maximum(int arr[],int n)
{
    int mx = 0;
    
    for(int i=0 ; i < n; i++)
    {
        if(mx<arr[i]){
            mx = arr[i];
        }
    }cout<<mx<<endl;
}
void minimum(int arr[],int n){
    int mn = 99999999;
    for(int i=0 ; i < n; i++)
    {
        if(mn>arr[i]){
            mn = arr[i];
        }
    }cout<<mn<<endl;

}
void average(int arr[],int n){
    double avg = 0.0;
    double sum = 0.0;
    for(int i=0 ; i < n; i++)
    {
        sum+=arr[i];
    }cout<<sum/n<<endl;

}
void total(int arr[],int n){
    int sum = 0;
    for(int i=0 ; i < n; i++)
    {
        sum+=arr[i];
    }cout<<sum<<endl;
}
void sin_value(int arr[],int n){
    double a[n];
    for(int i=0 ; i < n; i++)
    {
        a[i] = sin((double)arr[i]);
        cout<<a[i]<<" ";
    }cout<<"\n";
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i < n; i++)
    {
        cin>>arr[i];
    }
    maximum(arr,n);
    minimum(arr,n);
    average(arr,n);
    total(arr,n);
    sin_value(arr,n);
    return 0;
}