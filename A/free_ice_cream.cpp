//https://codeforces.com/contest/686/problem/A

#include <iostream>

using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;

    long long total = 0;
    while(n--)
    {
        char oper; long long d;
        
        cin >> oper >> d;

        if(oper == '+')
            x+=d;
        else if(x - d < 0)
            total++;
        else 
            x-=d; 
    }
    cout << x << " " << total;
}