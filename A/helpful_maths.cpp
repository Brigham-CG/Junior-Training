//https://codeforces.com/contest/339/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string sum ;

    cin >> sum;

    int size = (int)ceil(sum.size()/ 2.0);
    int numbers[size];

    
    int j = 0;
    for(int i = 0; i < sum.size(); i+=2, j++)
        numbers[j] = (int )sum[i] - 48;
    
    sort(numbers, numbers + size);
    
    cout << numbers[0];

    for(int i = 1; i < size; i++)
        cout << "+" << numbers[i];

}