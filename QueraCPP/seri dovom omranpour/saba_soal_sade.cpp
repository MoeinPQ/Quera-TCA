#include<iostream>
using namespace std;
int main()
{
    double n;
    int k,t;
    cin >> n >> k;
    t=n;
    for(int i=0;i<k;i++)
    {
        t/=2;
        n/=2;
    }
    //cout << n << endl << t;
    if(n>=0)
        cout << t;
    else if(t==n)
        cout << t;
    else 
        cout << t-1;
}
// hal shode 100