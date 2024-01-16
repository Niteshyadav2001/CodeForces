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
        ll num;
        cin>>num;
        if(num % 3 == 0) cout<<num/3<<" "<<num/3<<endl;
        else if(num % 3 == 1) cout<<num/3+1<<" "<<num/3<<endl;
        else if(num % 3 == 2) cout<<num/3<<" "<<num/3+1<<endl;
    }
    return 0;
}
