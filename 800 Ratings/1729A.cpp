#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll num;
    vector<int> temp;
    vector<vector<int>> arr;
    for(int i = 0;i < n;i++)
    {
        temp = {};
        for(int j = 0;j < 3;j++)
        {
            cin>>num;
            temp.push_back(num);
        }
        arr.push_back(temp);
    }

    //writing down the soln
    ll x = 0,y = 0;
    for(int i = 0;i < n;i++)
    {
        x = abs(arr[i][0] - 1);
        y = abs(arr[i][1] - arr[i][2])+ (arr[i][2] - 1);
        if(x < y) cout<<"1"<<endl;
        else if(y < x) cout<<"2"<<endl;
        else cout<<"3"<<endl;
    }
    return 0;
}