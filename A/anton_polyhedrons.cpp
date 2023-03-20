//https://codeforces.com/contest/785/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int n;
    cin >> n;

    int total = 0;
    
    while(n--)
    {
        string p;

        cin >> p;

        if(p=="Tetrahedron")
            total+=4;
        else if(p == "Cube")
            total+=6;
        else if(p == "Octahedron")
            total+=8;
        else if(p == "Dodecahedron")
            total+=12;
        else
            total+=20;
    }

    cout << total;
}