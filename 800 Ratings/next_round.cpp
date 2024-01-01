#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,count = 0;
    cin>>n>>m;
    vector<int> temp;
    for(int i = 0;i<n;i++)
    {
        cin>>k;
        temp.push_back(k);
    }

    for(int i = 0;i<n;i++)
    {
        if(temp[i] >= temp[m-1] && temp[i] > 0)
        {
            ++count;
        }
    }
    cout<<count;

    return 0;
}