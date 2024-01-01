#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll num;
    int sum = 0;
    vector<int> temp;
    vector<vector<int>> arr;
    
    //taking the input
    for(int i = 0;i < n;i++)
    {
        temp = {};
        for(int j = 0;j < 2;j++)
        {
            cin>>num;
            temp.push_back(num);
        }
        arr.push_back(temp);
    }

    //writing down the solution
    int maxi = INT_MIN;
    for(int i = 0;i < n;i++)
    {
        sum = sum - arr[i][0] + arr[i][1];
        maxi = max(maxi,sum);
    }
    cout<<maxi;
    return 0;
}