//https://codeforces.com/contest/225/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, a, b;

    cin >> n>> x;

    int comp = 7 - x;

    bool p = 1;

    while(n--)
    {
        cin >> a >> b;

        if(a == x || b == x || a == 7 - x || b ==  7 - x)
            p = 0;
                    
    }

    cout << (p ? "YES": "NO");
}
