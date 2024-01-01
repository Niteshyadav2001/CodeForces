#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,temp;
    cin>>str;
    cin>>temp;
    reverse(temp.begin() , temp.end());
    if(temp == str) cout<<"YES";
    else cout<<"NO";
    return 0;
}