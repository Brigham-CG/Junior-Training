#include <bits/stdc++.h>

using namespace std;

int main()
{
    string keyboard[3] = {"qwertyuiop", "asdfghjkl;","zxcvbnm,./"};

    char moved;
    cin >> moved;

    string message;

    cin >> message;

    string ori_message;

    for(int i = 0; i < message.size(); i++)
    {
        for(int j = 0; j < 3; j++)
        {
            int ind = keyboard[j].find(message[i]);

            if(ind != string::npos)
            {
                if(moved == 'R')
                    ori_message += keyboard[j][ind-1];
                else
                    ori_message += keyboard[j][ind+1];
                break;
            }
                    
        }

    }

    cout << ori_message;
}   