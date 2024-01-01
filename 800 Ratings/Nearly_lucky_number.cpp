#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll num;
    cin>>num;
    ll count = 0;
    while(num != 0)
    {
        ll rem = num%10;
        if(rem == 4 || rem == 7)
        {
            count++;
        }
        num = num/10;
    }
    if(count == 4 || count == 7)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    // count == 4 || count == 7 ? cout<<"YES":cout<<"NO";
    return 0;
}