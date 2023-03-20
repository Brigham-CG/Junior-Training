#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int list[2*n];

    for (int i = 0; i < n; i++)
        cin >> list[i*2] >> list[i*2 + 1];
    
    int total = 0;

    for (int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(i != j && list[i*2] == list[j*2+1])
                total++;
        
    cout << total;
}

