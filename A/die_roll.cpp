#include <iostream>

using namespace std;

int main()
{
    int y, w;

    cin >> y >> w;

    int m = y > w ? y : w;
    int e = 6 - m + 1;

    if(e == 1)
        cout << "1/6";
    else if(e == 2)
        cout << "1/3";
    else if(e == 3)
        cout << "1/2";
    else if(e == 4)
        cout << "2/3";
    else if(e == 5)
        cout << "5/6";
    else if(e == 6)
        cout << "1/1";    
}