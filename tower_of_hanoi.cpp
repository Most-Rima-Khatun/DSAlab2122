#include<bits/stdc++.h>
using namespace std;
void disk(int n,char beg,char end, char aux)
{
    if(n==1)
    {
        cout<<n<<" disk : "<<beg<<"->"<<end<<endl;    
        return;
    }
    disk(n-1,beg,aux,end);
    cout<<n<<" disk: "<<beg<<"->"<<end<<endl;
   disk(n-1,aux,end,beg);
}

int main()
{
    int n;
    cin>>n;
    disk(n,'A','B','C');
    return 0;
}