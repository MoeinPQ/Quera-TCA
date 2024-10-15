#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3,h1,h2,h3;
    cin >> a1;
    cin >> b1;
    cin >> a2;
    cin >> b2;
    cin >> a3;
    cin >> b3;
    if(a1<=b1)
    {
        h1=a1;
    }else
    {
        h1=b1;
    }
    if (a2<=b2)
    h2=a2;
    else 
    {
        h2=b2;
    }
    if (a3<=b3)
    {
        h3=a3;
    }else
    {
        h3=b3;
    }
    cout << h1+h2+h3;
    
    
}