#include <iostream>

using namespace std;

int main()
{
    int k , r;
    cin >> k >> r;

    int i = 0; 
    int val = 0;
    do
    {
        i++;
        val = (k * i) % 10; 
    }while(val != r && val != 0);

    cout << i << endl; 
}