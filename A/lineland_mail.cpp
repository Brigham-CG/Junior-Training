//https://codeforces.com/contest/567/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int cities[n];

    for(int i = 0; i < n; i++)
        cin >> cities[i];

    for(int i = 0; i < n; i++)
    {
        int min_, max_;

        max_ = max(abs(cities[i]-cities[0]), abs(cities[i]-cities[n-1]));


        if(i == 0)
            min_ = abs(cities[0] - cities[1]);
        else if(i == n - 1)
            min_ = abs(cities[n-1] - cities[n-2]);
        else
            min_ = min(abs(cities[i]-cities[i-1]), abs(cities[i]-cities[i+1]));

        cout << min_ << " " << max_ << endl;
    }
    
}