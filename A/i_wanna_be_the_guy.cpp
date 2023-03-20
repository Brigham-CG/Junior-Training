// https://codeforces.com/contest/469/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<bool> levels(n, 0);
    
    int total = 0;

    int p;
    cin >> p;

    for(int i = 0; i < p; i++)
    {
        int a;
        cin >> a;

        if(!levels[a-1])
        {
            levels[a-1] = 1;
            total++;
        }
    }   

    int q;
    cin >> q;

    for(int i = 0; i < q; i++)
    {
        int a;
        cin >> a;

        if(!levels[a-1])
        {
            levels[a-1] = 1;
            total++;
        }
    }

    if(total == n)
        cout << "I become the guy.";
    else    
        cout << "Oh, my keyboard!";
}