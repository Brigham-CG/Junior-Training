//https://codeforces.com/contest/807/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int n; 

    cin >> n;

    bool equals = 1, order = 1;

    
    int menor = 4126;
    for(int i = 0; i < n; i++)
    {
        int a, b;

        cin >> a >> b;

        if(menor < b)
            order = 0;
        else
            menor = b;

        if(a != b)
            equals = 0;
    }

    if(!equals)
        cout << "rated";
    else if(!order)
        cout << "unrated";
    else
        cout << "maybe";

}