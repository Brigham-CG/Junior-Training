//https://codeforces.com/contest/486/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    long long n;

    cin >> n;

    // if(n % 2)
    //     cout << -((n + 1) / 2);
    // else
    //     cout << n/2;

    long double d = n/2.0;
    
    cout << fixed<< setprecision(0)<<floor(d)*(floor(d)+1) - ceil(d) * ceil(d);

}
