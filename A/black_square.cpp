#include <iostream>

using namespace std;

int main()
{

    int calories[4];


    cin >> calories[0] >> calories[1] >> calories[2] >> calories[3];

    string strips;

    cin >> strips;

    int total = 0; 
    for(int i = 0; i < strips.size(); i++)
    {

        int calorie = ((int) strips[i]) - 49;
        
        total += calories[calorie];
        
    }
    cout << total;
}