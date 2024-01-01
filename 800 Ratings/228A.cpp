#include<bits/stdc++.h>
using namespace std;
int main()
{
    //taking input
    vector<int> arr;
    int n;
    for(int i = 0;i < 4;i++)
    {
        cin>>n;
        arr.push_back(n);
    }

    //writing down the solution
    unordered_map<int,int> mp;
    for(int i = 0;i < 4;i++)
    {
        mp[arr[i]]++;
    }
    cout<<4 - mp.size();
    return 0;
}