#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> temp;
    string s;
    for(int i = 0;i<n;i++)
    {
        cin>>s;
        temp.push_back(s);
        s = {};
    }

    for(int i = 0;i<n;i++)
    {
        string str = temp[i];
        int len = str.length();
        if(len <= 10)
        {
            cout<<str<<endl;
        }
        else if(len > 10)
        {
            cout<<str[0]<<len-2<<str[len-1]<<endl;
        }
    }
    return 0;
}