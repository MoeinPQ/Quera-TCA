#include<iostream>
using namespace std;
int main()
{
    int a,b,l,w=0;
    cin >> a >> b >> l;
    for(int i=1;i<=l;i++)
    {
        if(i%2==0)
        
            w+=b;
        else
            w+=a;
    }
    cout << w;
}
// tamam shode 100