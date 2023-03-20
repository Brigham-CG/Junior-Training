//https://codeforces.com/contest/483/problem/A

#include <bits/stdc++.h>

using namespace std;


int main()
{

    long long l, r;

    cin >> l >> r;

    if(r-l<2)
    {
        cout << -1;
        return 0;
    }

    if(l % 2)
        l++;
    
    if(r-l<2)
    {
        cout << -1;
        return 0;
    }

    cout << l << " " << l + 1 << " "<< l + 2;

}