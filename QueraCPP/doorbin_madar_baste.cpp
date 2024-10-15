#include<iostream> 
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3,w,k;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    if(a1==a2)
    {
        w=a3;        
    }else if(a2==a3)
    {
        w=a1;
    }else
    {
        w=a2;
    }
    cout << w << " ";
    if(b1==b2)
    {
        k=b3;        
    }else if(b2==b3)
    {
        k=b1;
    }else
    {
        k=b2;
    }
    cout << k;
}