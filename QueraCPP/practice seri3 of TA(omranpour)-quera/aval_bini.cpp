#include<iostream>
using namespace std;
int aval_check(int a)
{
    int w=0;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i == 0)
        w++;
    }
    if(w != 0)
    return 1;
    else return 2;
}

int main()
{
    int a,b,l=1;
    cin >> a >> b;
    for(int i=a+1;i<b;i++)
    {
        if(aval_check(i) == 2)
        {
            if(l!=1)
            {
                cout << ",";
            }
            cout << i;
            l++;
        }
    }
}

// hal shode