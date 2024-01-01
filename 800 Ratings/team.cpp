#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    int arr[1000][1000];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    // count no. of one's in each row
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 1)
            {
                ++temp;
            }
        }
        if (temp >= 2)
        {
            ++count;
        }
    }
    cout << count;
    return 0;
}