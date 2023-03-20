//https://codeforces.com/contest/768/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{

    set<long> stewards;

    long n, m;

    cin >> n;
    m = n;

    long menor = 1000000000, mayor = 0;
    long min = 0, max = 0;

    while(m--)
    {
        long s;
        cin >> s;
        stewards.insert(s);
        if(s < menor)
        {
            menor = s;
            min = 1;
        }
        else if(s == menor)
            min++;
         
        if(s > mayor)
        {
            mayor = s;            
            max = 1;
        }
        else if(s == mayor)
            max++;
    }

    if(stewards.size() > 2)
        cout << n - max - min;
    else
        cout << 0;
}