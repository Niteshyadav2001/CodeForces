#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;
    cin>>t;
    while(t--){
        ll x,y,n;
        cin>>x>>y>>n;
        int rem = n % x;
        if(rem >= y){
            n -= (rem - y);
            cout<<n<<endl;
        }
        else{
            n -= x - (y - rem);
            cout<<n<<endl;
        }
    }
    return 0;
}
