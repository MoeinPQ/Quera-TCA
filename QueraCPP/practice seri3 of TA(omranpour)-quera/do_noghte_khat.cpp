#include<iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2 ;
    if(y1==y2)
    cout << "Horizontal";
    else if(x2 == x1)
    cout << "Vertical";
    else cout << "Try again";
}

// hal shode