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

    ll start = 0;
    ll end = n-1;
    ll cnt1 = 0;
    ll cnt2 = 0;
    while(start < end)
    {
        if(arr[start] > arr[end])
        {
            cnt1 += arr[start];
            ++start;
        }
        else if(arr[end] > arr[start]){
            cnt1 += arr[end];
            --end;
        }
        if(arr[start] > arr[end])
        {
            cnt2 += arr[start];
            ++start;
        }
        else if(arr[end] > arr[start]){
            cnt2 += arr[end];
            --end;
        }
        if(start == end){
            if(n % 2 == 0) cnt2 += arr[start];
            else cnt1 += arr[start]; 
        }
    }
    if(n == 1){
        cout<<arr[start]<<" "<<cnt2<<endl; 
    }

    else{
        cout<<cnt1<<" "<<cnt2<<endl;
    }

    return 0;
}