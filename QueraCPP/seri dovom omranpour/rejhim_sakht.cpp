#include<iostream>
using namespace std;
int main()
{
    int R=0,G=0,Y=0;
    string a;
    cin >> a;
    for(int i=0;i<5;i++)
    {
        if(a[i]=='R')
            R++;
        else if(a[i]=='G')
            G++;
        else
            Y++;
    }
    if(R>=3)
    {
        cout << "nakhor lite";
        return 0;
    }else if((Y>=2)&&(R>=2))
    {
        cout << "nakhor lite";
        return 0;
    }else if(G==0)
    {
        cout << "nakhor lite";
        return 0;
    }else 
    cout << "rahat baash";
}