//https://codeforces.com/contest/584/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;

    cin >> n >> t;

    if(n == 1 && t == 10)
    {
        cout << -1;
        return 0;
    }

    if(t == 10)
    {

        string number(n-1, 48);
        cout << "1" << number;
        return 0;
    }    
    
    string number(n, 48+t);

    cout << number;

}