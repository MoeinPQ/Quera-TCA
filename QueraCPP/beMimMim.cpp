#include<iostream>
using namespace std;
int main()
{
    unsigned long long int a , b;
    cin >> a >> b;
    int t;
    if(b>a)
    {
        t=b;
        b=a;
        a=t;
    }

    int r=1;
    while (r !=0)
    {
        r = a%b;
        a=b;
        b=r;

        /* code */
    }
    cout << a;
}

// hal shode.