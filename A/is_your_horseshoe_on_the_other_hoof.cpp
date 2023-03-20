#include <iostream>

using namespace std;

int main()
{

    int shoes[4];

    int count = 0;
    for(int i = 0; i < 4; i ++)
    {
        cin >> shoes[i];
        for(int j = 0 ; j < i; j++)
            if(shoes[i] == shoes[j])
            {
                count++;
                break;
            }
    }
    
    cout << count;
}