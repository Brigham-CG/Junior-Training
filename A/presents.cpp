//https://codeforces.com/contest/136/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int list[n];

    for(int i = 0; i < n; i++)
    {
        int p;
        cin >> p;

        list[p - 1] = i + 1;
    }

    for(int i = 0; i < n; i++)
        cout << list[i] << " ";

}