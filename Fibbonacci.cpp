#include<bits/stdc++.h>
using namespace std;

int fibbo(int n)
{
    if(n == 0 || n == 1)
    return n;
   //else
    return fibbo(n-1)+fibbo(n-2);
}

int main()
{
    int n;
    cin>>n;
    int i = 0;
    while(i<=n){
        int ans = fibbo(i);
        cout<<ans<<" ";
        i++;
    }    
    return 0;
}