#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    
    while(n>0){
        int temp=ans+1;
        int sum= (temp*(temp+1)) / 2;
        n-=sum;
        temp++;
        if(n>=(temp*(temp+1)) / 2)
        ans++;
    }
    cout<<ans+1;
}