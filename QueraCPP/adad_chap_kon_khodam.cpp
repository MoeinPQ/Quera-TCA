#include<iostream>
using namespace std;
int main()
{
    unsigned long x,i,w=0,sum=0;
    cin >> x;
    while(x>0)
    {
        sum+= (x%10);
        sum*=10;
        x/=10;
        w++;
    }
    sum/=10;
    int r=0;
    while(sum>0)
    {
        r=sum%10;
        cout << r << ": ";
        for( i=0;i<r;i++)
        {
            cout << r;
        }
        cout << endl;
        sum/=10;
    }
    return 0;
}