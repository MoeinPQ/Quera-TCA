#include<iostream>
using namespace std;
int main()
{
    unsigned long sum1=0,x;
    cin >> x;
    if(x<10)
    {
        cout << x;
    }else
    {
        while (x>=10)
        {
            sum1=0;
            while(x>0)
            {
                sum1+=(x%10);
                x/=10;
            }
            x=sum1;
        }
        cout << sum1;
    }
}