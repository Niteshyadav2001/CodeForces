#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> s;
    ll num;
    ll k;
    cin>>num;
    for(int i = 1;i <= num;i++)
    {
        cin>>k;
        if(k != 0) s.insert(k);
    }
    cin>>num;
    for(int i = 1;i <= num;i++)
    {
        cin>>k;
        if(k != 0) s.insert(k);
    }
    if(s.size() == n)
    {
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }

    return 0;
}