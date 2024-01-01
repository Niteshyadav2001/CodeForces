#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    ll num;
    vector<int> a;
    for(int i = 0;i < n;i++)
    {
        cin>>num;
        a.push_back(num);
    }
    sort(a.begin() , a.end());
    if(a[n-1] == 1)
    {
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    return 0;
}