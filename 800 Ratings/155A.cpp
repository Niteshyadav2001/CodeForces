#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
    int maxi = arr[0];
    int mini = arr[0];

    ll count = 0;
    for(int i = 1;i < n;i++){
        if(arr[i] > maxi){
            count++;
            maxi = arr[i];
        }
        else if(arr[i] < mini){
            count++;
            mini = arr[i];
        }
        else continue;
    }
    cout<<count<<endl;
    return 0;
}