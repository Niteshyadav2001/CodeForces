#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum = 0;
    cin>>n;
    string s;
    vector<string> temp;
    for(int i = 0;i<n;i++)
    {
        cin>>s;
        temp.push_back(s);
        s = {};
    }
    for(int i = 0;i<n;i++)
    {
        string str = temp[i];
        if(str == "X++") sum+=1;
        else if(str == "++X") sum+=1;
        else if(str == "--X") sum-=1;
        else if(str == "X--") sum-=1;
    }
    cout<<sum;
    return 0;
}