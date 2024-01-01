#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    //taking input
    ll n,cnt_A = 0,cnt_D = 0;
    cin>>n;
    char ch;
    for(int i = 0;i<n;i++)
    {
        cin>>ch;
        if(ch == 'A') cnt_A++;
        else if(ch == 'D') cnt_D++;
    }

    //writing down the solution
    if(cnt_A > cnt_D) cout<<"Anton";
    else if(cnt_A < cnt_D) cout<<"Danik";
    else cout<<"Friendship";
    return 0;
}