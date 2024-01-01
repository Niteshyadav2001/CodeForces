#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    //taking input
    ll n;
    cin>>n;
    int per;
    long double result = 0.00;
    for(int i = 0;i<n;i++)
    {
        cin>>per;
        result += per;
    }
    result /= n;
    cout<<result;
    return 0;
}