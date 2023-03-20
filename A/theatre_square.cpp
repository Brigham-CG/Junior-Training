//https://codeforces.com/contest/1/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m, a;

    cin >> n >> m >> a;

    cout << fixed<< setprecision(0)<<ceil(n/(a*1.0)) * ceil(m/(a*1.0));
    
}