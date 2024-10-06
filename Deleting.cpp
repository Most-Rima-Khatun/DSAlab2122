#include<bits/stdc++.h>
using namespace std;
void deletingString(string arr[],int n){
    int j = 0;
    string item = "Karim";
    for(int i = 0 ; i < n;i++)
    {
        if(arr[i]>item)
        {
            j = i;
            break;
        }
    }
    int position = j;
    n = n + 1;
    for(int i = n; i > 0; i--)
    {
        if(i>=j)
        {
            arr[i+1] = arr[i];
        }
    }arr[position] = item;
    for(int i = 0; i< n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main()
{
    int n;
    cin>>n;
    string name ;
    string arr[n];
    for(int i = 0; i< n;i++)
    {
        cin>>name;
        arr[i] = name;
    }
    sort(arr,arr+n);
    deletingString(arr,n);
    return 0;
}