//https://codeforces.com/problemset/problem/767/A
#include <bits/stdc++.h>
    
using namespace std;
    
int main()
{
    int n;
    
    cin >> n;
    
    int mayor=n;
    
    vector<bool> list(n, 0);
    
    for(int i = 0; i < n; i++)
    {  
        int number;
        cin >> number;
        list[number - 1] = 1;
        
        if(number == mayor)
        {
            while(mayor > 0 && list[mayor - 1])
            {
                cout << mayor << " ";
                list[mayor - 1] = 0;
                mayor--;
            }
        }
        cout << "\n";
        
    }
}