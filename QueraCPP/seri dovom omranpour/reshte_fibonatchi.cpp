#include<iostream>
using namespace std;
int hast(int a)
{
    int c1=0,c2=1,c3=0;
    while(c3<=a)
    {
        c3=c1+c2;
        if(a==c3)
        {
            return 2;
        }
        c1=c2;
        c2=c3;
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        if(hast(i)==2)
        cout << '+';
        else 
        cout << '-';
    }
}