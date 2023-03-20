// https://codeforces.com/contest/707/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;

    cin >> n >> m;

    bool color = 0;
    for(int i = 0; i < n*m; i++)
    {
        char p_color;

        cin >> p_color;

        if(!color && (p_color != 'W' && p_color != 'G' && p_color != 'B'))
            color = 1;
    }
    
    if(color)
        cout << "#Color";
    else
        cout << "#Black&White";        
} 