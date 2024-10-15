#include <iostream>
using namespace std;

int main()
{
    string input;
    cin >> input;
    for (int i = 0; i < input.length() ; i++)
    {
        string t = input;
        for (int j = 0; j < i; j++)
        {

            t[j] = input[i];

        }
        cout << t +'\n';
    }
    
    return 0;
}
