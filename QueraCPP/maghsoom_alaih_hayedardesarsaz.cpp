#include<iostream>
using namespace std;
int main()
{
    int i,n,sum1=0;
    cin >> n;
    int w=n;
    for(int p=1;p<=n;p++)
    {
        sum1+=p;
    }
    for(i=1;i<=n;i++)
    {
        for(int h=1;h<=i/2;h++)
        {
            if(i%h==0)
            {
                w++;
                sum1+=h;
            }
        }
    }
    cout << w << " " << sum1;
}