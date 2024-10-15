#include<iostream> 
using namespace std;
int main()
{
    int k,n,w=0,h=0,i=0;
    cin >> n >> k;
    while(h!=1)
    {
        if(i==0)
        {
        h=1;
        }
        i++;
        h+=k;
        w++;
        if(h>=n)
        {
            h-=n;
        }
    }
    cout << w;
}
