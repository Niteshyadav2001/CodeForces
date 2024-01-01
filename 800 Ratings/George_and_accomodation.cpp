#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num;
    cin>>n;
    vector<int> temp;
    vector<vector<int>> arr;
    for(int i = 0;i<n;i++)
    {
        temp = {};
        for(int j = 0;j<2;j++)
        {
            cin>>num;
            temp.push_back(num);
        }
        arr.push_back(temp);
    }
    
    //check for availabilty
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i][1] - arr[i][0] >= 2) count++;
    }
    cout<<count;

    return 0;
}