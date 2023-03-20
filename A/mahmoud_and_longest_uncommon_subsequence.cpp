//A. Mahmoud and Longest Uncommon Subsequence

#include <bits/stdc++.h>

using namespace std;

int main()
{

    string a, b;

    cin >> a >> b;

    if(a.size()==b.size() && a == b)

    {
        cout << -1;
        return 0;
    }
    
    cout << max(a.size(),b.size());
}
