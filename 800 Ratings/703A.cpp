#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll num;
    ll num1;
    int M = 0, C = 0;
    vector<int> temp;
    vector<vector<int>> arr;
    for(int i = 0;i < n;i++)
    {
        cin>>num;
        cin>>num1;
        if(num > num1) M++;
        else if(num1 > num) C++;
    }
    if(M > C)
    {
        cout<<"Mishka";
    }
    else if(C > M)
    {
        cout<<"Chris";
    }
    else if(C == M){
        cout<<"Friendship is magic!^^";
    }
    return 0;
}