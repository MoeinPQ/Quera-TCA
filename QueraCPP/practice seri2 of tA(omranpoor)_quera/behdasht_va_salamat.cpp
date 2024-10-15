#include<iostream>
using namespace std;
int main()
{
    int x,n;
    cin >> x >> n;
    if(n==0)
    {
        cout << 20;
        return 0;
    }else if(n==7)
    {
        cout << x;
        return 0;
    }else 
    {
        if(x-n < 0)
        {
            cout << 0;
        }else
        {
            cout << x-n;
        }
    }
    return 0;
}
// taamam