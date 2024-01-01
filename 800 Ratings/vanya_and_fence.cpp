#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    //taking input
    ll n,height;
    cin>>n>>height;
    vector<int> temp;
    ll num;
    for(int i = 0;i<n;i++)
    {
        cin>>num;
        temp.push_back(num);
    }

    //writing down the soln
    ll count = 0;
    for(int i = 0;i<n;i++)
    {
        if(temp[i] <= height)
        {
            count++;
        }
        else if(temp[i] > height)
        {
            count += 2;
        }
    }
    cout<<count;
    return 0;
}