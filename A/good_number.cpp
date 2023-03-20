//https://codeforces.com/contest/365/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    string a[n];

    int total = 0;
    while(n--)
    {
        string num;
        cin >> num;

        vector<bool> probe(k+1, 0);

        int c = 0;

        for(int i = 0; i < num.size(); i++)
        {
            int ind = int(num[i]) - 48;
            
            if(ind <= k && !probe[ind])
            {
                probe[ind] = 1;
                c++; 
            }            
        }

        if(c == k+1)
            total++;
    }

    cout << total;

}