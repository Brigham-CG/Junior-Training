//https://codeforces.com/contest/80/problem/A


#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int n, m;
    cin >> n >> m;

    for(int i = n + 1; n <=m; i++)
    {
        bool next = 1;
        for(int j = 2; j < i; j++)
        {
            if(!(i % j))
            {
                next = 0;
                break;
            }
        }
        if(next)
        {
            if(i == m)
            {
                cout << "YES";
                return 0;
            }
            cout << "NO";
            return 0;
        }
    }

    cout << "NO";
}