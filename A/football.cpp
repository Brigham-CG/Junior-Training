//https://codeforces.com/contest/43/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{

    map<string, int> description;

    int n; 

    cin >> n;

    int mayor_p = 0;
    string mayor_n;

    for(int i = 0; i < n; i++)
    {
        string n_team;
        cin >> n_team;

        if(description.find(n_team) != description.end())
            description[n_team]++;
        else
            description[n_team] = 1;

        if(mayor_p < description[n_team])
        {
            mayor_p = description[n_team];
            mayor_n = n_team;
        }
    }

    cout << mayor_n;
}