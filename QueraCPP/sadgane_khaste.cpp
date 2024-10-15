#include<iostream>
using namespace std;
int baraks(int n)
{
    int r=0;
    while(n>0)
    {
        r+=n%10;
        r*=10;
        n/=10;
    }
    return r/10;
}
int main()
{
    int a,b;
    cin >> a >> b;
    if(baraks(a) > baraks(b))
    {
        cout << b << " < " << a;

    }else if(baraks(b)>baraks(a))
    {
        cout << a << " < " << b;
    }
    else
    {
        cout << a << " = " << b;
    }
}