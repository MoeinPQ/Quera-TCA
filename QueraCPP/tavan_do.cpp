#include<iostream> 
using namespace std;
int main()
{
    int n,h=2;
    cin >> n;
    while(h>0)
    {
        if(h>n)
        {
            cout << h;
            return 0;
        }
        h*=2;
    }
}