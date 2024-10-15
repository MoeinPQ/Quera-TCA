#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if((a==0) || (b==0) || (c==0))
    {
        cout << "No";
        return 0;
    }

    if((a+b+c) == 180)
    {
        cout << "Yes";
    }else cout << "No";
}

// hal shode