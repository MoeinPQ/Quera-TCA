#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream Buttons("Bottons_RGB.txt");
    ifstream jadid("fargh.txt");
    string a;
    getline(cin , a);
    while(jadid >> a)
    {
        jadid >> a;
        getline(cin , a);
    }

    if(jadid == Buttons)
    {
        cout << "Buttons";
    }
}