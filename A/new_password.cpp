//https://codeforces.com/contest/770/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(0));

    int n, k;
    cin >> n >> k;

    // generacion de contrañseña

    string pass(n, ' ');

    for(int i = 0; i < k; i++)
        pass[i] = char (i + 97);

    for(int i = 0; i < n - k; i++)
        pass[i + k] = !(i % 2) ? 'a' : char (k + 96);
 
    cout << pass;

}