#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    //taking input
    int n;
    cin>>n;
    ll num;
    vector<int> temp;
    vector<vector<int>> arr;
    for(int i = 0;i < n;i++)
    {
        temp = {};
        for(int j = 0;j < 4;j++)
        {
            cin>>num;
            temp.push_back(num);
        }
        arr.push_back(temp);
    }


    //writing down the solutions
    vector<int> result;
    ll count = 0;
    for(int i = 0;i < n;i++)
    {
        count = 0;
        for(int j = 1;j < 4;j++)
        {
            if(arr[i][j] > arr[i][0]) ++count;
        }
        cout<<count<<endl;;
    }
    return 0;
}