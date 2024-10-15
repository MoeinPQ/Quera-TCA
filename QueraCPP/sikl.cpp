#include<iostream>
using namespace std;
int main() 
{
    string all[] = {"331122", "123", "2123"};
    string names[] = {"keyvoon", "nezam", "shir farhad"};
    int N, scores[] = {0, 0, 0}, max = 0;

    cin >> N;

    for (int i = 0; i < 3; i++)
    {
        string tmp = all[i];
        while(all[i].length() < N)
            all[i] += tmp;
    }
    
    string keys;
    cin >> keys;

    for (int i = 0; i < keys.length(); i++)
        for (int j = 0; j < 3; j++)
            if(keys[i] == all[j][i])
                scores[j]++;

    for (int i = 0; i < 3; i++)
        if(scores[i] > max)
            max = scores[i];
    
    cout << max << endl;

    for (int i = 0; i < 3; i++)
        if (scores[i] == max)
            cout << names[i] << endl;
    
}