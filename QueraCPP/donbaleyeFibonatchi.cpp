#include<iostream>
using namespace std;
void ShowFibNth(long int n, long int b)
{
    int c=0;
    cout << n << endl;
    while (n>1)
    {
        cout << b-n << endl;
        c=b-n;
        b=n;
        n=c;
    }
    if(b!=1)
    cout << 1;

}
int main()
{
    long int a ;
    long int b;
    cin >> a >> b;
    ShowFibNth(a , b);

}

// hal shode.
