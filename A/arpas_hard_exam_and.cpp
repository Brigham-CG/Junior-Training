//https://codeforces.com/contest/742/problem/A

#include <iostream>

using namespace std;

int main()
{

    int n;

    cin >> n;
    
    if(!n)
    {
        cout << 1;
        return 0;
    }

    n %= 4;

    if(n == 1)
        cout << 8;
    else if(n == 2)
        cout << 4;
    else if(n == 3)
        cout << 2;
    else
        cout << 6;

}