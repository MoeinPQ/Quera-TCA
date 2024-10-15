#include<iostream>
#include<string.h>
using namespace std;
char paiin(char f)
{
    if(f > 64 && f < 91) return f + 32;
    return f;
}
char baala(char k)
{
    if(k > 96 && k < 123) return k - 32;
    return k;
}
int main()
{
    int n,counter=0;
    cin >> n;
    string line[n],word;
    //getline(cin,line[0]);
    cin.ignore(1,'\n');
    for (int i = 0; i < n; i++) getline(cin,line[i]);
    for (int i = 0; i < n; i++)
    {
        counter = 0;
        for (int j = 0; j < line[i].length(); j++)
        {
            if (counter == 0) line[i][j] = baala(line[i][j]);
            else line[i][j] = paiin(line[i][j]);
            if(line[i][j] == ' ') counter = 0;
            else counter++;
        }
    }
    for (int i = 0; i < n; i++) cout << line[i] << "\n";
    return 0;
}