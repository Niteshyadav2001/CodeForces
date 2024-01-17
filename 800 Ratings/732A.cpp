#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll prizes,burles;
    cin>>prizes>>burles;
    for(int i = 1;i <= 10;i++){
        if((prizes * i) % 10 == 0){
            cout<<i<<endl;
            break;
        }
        if((prizes * i) % 10 == burles){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}