// https://codeforces.com/contest/490/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int spell[n];
    
    int summ[3] = {0,0,0};
    
    for(int i = 0; i < n; i++)
    {
        cin >> spell[i];
        summ[spell[i] - 1]++;
    }

    int iter = min(min(summ[0], summ[1]), summ[2]);

    cout << iter << endl;

    for(int i = 0; i < iter; i++)
    {
        for(int j = 1; j <= 3; j++)
        {   
            for(int k = 0; k < n; k++)
            {
                if(spell[k] == j)
                {
                    cout << k + 1 << " ";
                    spell[k] = 0;
                    break;
                }    
            }
        }
        cout << endl;
    }
}