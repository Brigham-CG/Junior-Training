//https://codeforces.com/contest/318/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    long long n, k;

    cin >> n >>  k;


    if(k <= ceil(n/2.0))
        cout << setprecision(0) << fixed << k * 2 - 1;
    else 
        cout << setprecision(0) << fixed << (k - ceil(n/2.0)) * 2;
}