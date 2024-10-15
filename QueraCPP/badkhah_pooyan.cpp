#include<iostream>
using namespace std;
int main()
{
    int i=1,p,k,d;
    cin >> p >> d;
    while(i>=0)
    {
        k=d*i;
        if(k%p<=(p/2))
        {
            cout << k;
            return 0;
        }
        i++;
    }
}