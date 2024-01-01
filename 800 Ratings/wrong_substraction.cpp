#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    //taking input
    ll num,k;
    cin>>num>>k;
    for(int i = 0;i<k;i++)
    {
        ll rem = num % 10;
        if(rem != 0) --num;
        else num /= 10;
    }
    cout<<num;
    return 0;
}