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
        vector<ll> arr;
        ll temp = 9;
        while(num != 0){
            if(num < temp) {
                arr.push_back(num);
                num = 0;
            }
            else{
                arr.push_back(temp);
                num -= temp;
                temp--;
            }
        }
        reverse(arr.begin() , arr.end());
        for(auto a : arr) cout<<a;
        cout<<endl;
    }
    return 0;
}
