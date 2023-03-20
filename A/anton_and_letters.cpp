//https://codeforces.com/contest/443/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector <int> set_procesed(26, 0);

    string set;
    
    getline(cin, set);

    int total = 0;

    for(int i = 1; i < set.size(); i+=3)
    {
        
        if(! set_procesed[int (set[i]) - 97])
        {
            set_procesed[int (set[i]) - 97] = 1;
            total++;
        }
    }   

    cout << total;
}