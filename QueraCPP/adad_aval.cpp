#include<iostream>
using namespace std;
int aval(int n)
{
    int w=0,i;
    if(n!=1)
    {
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        w++;
    }
    return w;
    }else
    return 1;
}
int main()
{
    int  a,b;
    cin >> a >> b;
    /*if(a>b)
    {
        a=a-b;
        b=a+b;
        a=b-a;
        //cout << a <<"\t" << b;
    }*/
    for(int i=a;i<=b;i++)
    {
        if(aval(i)==0)
        {
            cout << i << endl;
        }
    }
}