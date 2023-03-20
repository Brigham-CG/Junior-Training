#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, k, d;

    cin >> n >> t >> k >> d;

    int t1 = ceil(n/(k*1.0)) * t;
    
    int t2;

    int tov1 = 0, tov2 = 0;
    
    tov1 += t;
    tov2 += d;
    n = n - k > 0 ? n - k : 0;

    while(n)
    {    
        
        if(tov1 < tov2)
            tov1 += t;
        else
            tov2 += t;
        n = n - k > 0 ? n - k : 0;
    }
            
    if(tov2 == d)
        t2 = tov1;    
    else if(tov1 > tov2)
        t2 = tov1;
    else
        t2 = tov2;

    if(t1 > t2)
        cout << "YES";
    else
        cout << "NO";
}
