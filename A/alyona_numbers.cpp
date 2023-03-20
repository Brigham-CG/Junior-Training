//https://codeforces.com/contest/682/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long x, y;

    cin >> x >> y;

    long long min_ = min(x, y);
    long long max_ = max(x, y);

    long long numbers[5];
    
    long long total = 0; 

    for(long long i = 1; i <= min((long long)5, min_); i++)
    {
        long long  calc = (max_ - (!(5 - i)? 5 : (5 - i)));      
        numbers[i - 1] = 1 + ( calc< 0? -1 : calc / 5);
        total += numbers[i - 1];
    }
    
    if(min_ > 5)
    {
        total *= (min_/5);

        for(long long i = 0; i < min_ % 5; i++)
            total += numbers[i];
        
    }

    cout << total;
}