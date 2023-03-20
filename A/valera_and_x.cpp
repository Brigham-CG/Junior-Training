//https://codeforces.com/contest/404/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin >> n;

    char matriz[n][n];

    for(int i = 0; i < n; i++)
        cin >> matriz[i];
    
    char x = matriz[0][0];

    if(matriz[n/2][n/2] != x)
    {
        cout << "NO";
        return 0;
    }

    for(int i = 0; i < n; i++)
    {

        if(matriz[i][i] != x || matriz[i][n-1] != x ||
         matriz[n-1][i] != x || matriz[n-1][n-1] != x)
        {
            cout << "NO";
            return 0;
        }

        char not_x = matriz[i][i+1];

        if(x == not_x)
        {
            cout << "NO";
            return 0;
        }
        
        for(int j = i+1; j < n-1; j++) // left->right
        {  
            if(matriz[i][j] != not_x || matriz[n-1][j] != not_x  ||
                matriz[j][i] != not_x || matriz[j][n-1] != not_x)
            {
                cout << "NO";
                return 0;
            }
        }
        n--;   
    }
    cout << "YES";
}