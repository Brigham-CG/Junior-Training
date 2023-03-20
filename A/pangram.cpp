//https://codeforces.com/contest/520/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    char word[n + 1];

    cin >> word;

    int total = 0;
    vector<bool> alpha(26, 0);

    for(int i = 0; i < n; i++)
    {
        int ind = (int) word[i];

        if(ind <= 90) // uppercase
            ind -= 65;
        else // lowercase
            ind -= 97;

        if(!alpha[ind])
        {
            alpha[ind] = 1;
            total++;
        }
    }

    if(total == 26)
        cout << "YES";
    else
        cout << "NO";
}   