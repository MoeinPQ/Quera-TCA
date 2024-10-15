#include<iostream>
using namespace std;
int aval(int a)
{
    int w=0;
    for(int i=2;i<=(a/2);i++)
    {
        if(a%i == 0)
        {
            w++;
        }
    }
    return w;
}
int main()
{
    int b=0,n,h=0;
    cin >> n;
    if(n==1)
    {
        cout << 2;
        return 0;
    }
    int k=n;
    while(k>0)
    {
        b+=(k%10);
        k/=10;
    }
    for(int w=0,i=n+1;w<b;i++)
    {
        if(aval(i)==0)
        {
            w++;
        }
        h=i;
    }
    cout << h;
}