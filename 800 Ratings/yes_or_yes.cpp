#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> str;
    string s;
    for(int i = 0;i<n;i++)
    {
        cin>>s;
        str.push_back(s);
    }

    for(int i = 0;i<n;i++)
    {
        if(str[i] == "YES" || str[i] == "yES" || str[i] == "yes" || str[i] == "Yes" || str[i] == "YeS" || str[i] == "YEs" || str[i] == "yEs" || str[i] == "yeS")
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}