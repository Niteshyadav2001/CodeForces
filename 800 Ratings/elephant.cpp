#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int count = 0;
    while(x > 5)
    {
        x -= 5;
        ++count;
    }
    cout<<count+1;
    return 0;
}