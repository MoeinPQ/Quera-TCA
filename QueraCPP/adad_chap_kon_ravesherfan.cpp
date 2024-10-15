#include<iostream>
using namespace std;
void chap(int a )
{
    for(int i=0;i<a;i++)
    {
        cout << a;
    }
}
int main()
{
    string h;
    int t;
    cin >> h;
    for(int i=0;i< h.length();i++)
    {
        cout << h[i] << ": ";
        t=h[i]-48;
        chap(t);
        cout << endl;
    }
}