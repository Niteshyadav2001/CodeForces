#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    vector<string> str;
    int count = 0;
    for(int i = 0;i < n;i++)
    {
        cin>>s;
        if(s == "Icosahedron") count += 20;
        else if(s == "Cube") count += 6;
        else if(s == "Tetrahedron") count += 4;
        else if(s == "Octahedron") count += 8;
        else if(s == "Dodecahedron") count += 12;
    }
    cout<<count;

    return 0;
}