#include <iostream>

using namespace std;

int main()
{

    string word;

    cin >> word;

    int total = 0;

    int last = 0;
    
    for (int i = 0; i < word.size(); i++)
    {   
        int pos = int(word[i]) - 97;
        int distance = abs(last - pos);
        total += distance > 13 ? 26 - distance : distance;
        last = pos;
    }
    cout << total;
}