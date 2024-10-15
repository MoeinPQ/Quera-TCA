#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int c,a=2,b=2,h;
    cin >> c;
    do
    {
        h= c / pow(a,b);
        a++;
        b++;
    }while(h!=0);
    cout << --a << "\n" << b;
    return 0;
}