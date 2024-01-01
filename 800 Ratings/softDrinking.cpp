#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int result = min(k*l/nl,c*d);
    cout<<min(result,p/np)/n;
    return 0;
}