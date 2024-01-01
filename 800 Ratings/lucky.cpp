#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    vector<string> str;
    for(int i = 0;i<n;i++)
    {
        cin>>s;
        str.push_back(s);
    }

    for(int i = 0;i<n;i++)
    {
        string st = str[i];
        if(st[0]+st[1]+st[2] == st[3]+st[4]+st[5])
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}