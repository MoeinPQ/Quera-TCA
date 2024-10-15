#include<iostream>
using namespace std;
int main()
{
    unsigned long a,b,c,t=0;
    cin >> a >> b >> c;
    if((a<=0)||(b<=0)||(c<=0))
    {
        cout << "NO";
        return 0;
    }
    if(b>a)
    {
        t=a;
        a=b;
        b=t;
    }
    if(c>a)
    {
        t=a;
        a=c;
        c=t;
    }
    if(a*a == (b*b)+(c*c))
    {
        cout << "YES";
    }else
    {
        cout << "NO"; 
    }
}