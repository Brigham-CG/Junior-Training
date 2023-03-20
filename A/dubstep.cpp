//https://codeforces.com/contest/208/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    string word;

    cin >> word;

    string original;

    bool init = 1;
    
    bool space = 0;
    for(int i = 0; i < word.size(); i++)
    {
        if(word.size() - i >= 3 && word[i] == 'W' && word[i+1] == 'U' && word[i+2] == 'B')
        {
            i+=2;

            if(!init)
                space = 1;
                continue;
        }

        if(init)
            init = 0;

        if(space)
            original+= " ";

        original += word[i];
        space = 0;        
    }
    cout << original;
}
