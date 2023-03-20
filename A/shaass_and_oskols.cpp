#include <iostream>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int list[n];

    for(int i = 0; i < n; i++)
        cin >> list[i];
    
    int m; 
    cin >> m;

    int x, y;
    for(int i = 0; i < m; i++)
    {
        cin >> x >> y;

            
        if(x != 1) 
            list[x-2] += y - 1;

        if(x != n)        
            list[x] += list[x-1] - y;

        list[x-1] = 0;
    }
    
    for(int i = 0; i < n; i++)
        cout << list[i] << endl;
}