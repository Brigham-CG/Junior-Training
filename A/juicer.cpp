#include <iostream>

using namespace std;

int main()
{

    int n, b ,d;

    cin >> n >> b >> d;

    int section = 0;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a <= b)
        {
            section += a;
            if(section > d)
            {
                total++;
                section = 0;
            }
        }
    }

    cout << total;
}