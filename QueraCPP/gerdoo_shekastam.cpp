#include<iostream>
using namespace std;
int main()
{
    int d,l,w;
    cin >> d >> l >> w;
    if(d%w==0)
    {
        cout << 0 << " " << d/w;
        return 0;
    }
    if(d%l==0)
    {
        cout << d/l << " " << 0;
        return 0;
    }
    for(int i=l;i<d;i+=l)
    {
        for(int j=w;j<d;j+=w)
        {
            if(i+j==d)
            {
                cout << i/l << " " << j/w;
                return 0;
            }
        }
    }
    cout << -1;
}