#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    unsigned long r=0,k,f,a,sum=0,b,c;
    cin >> a >> b >> c;
    while(a>0)
    {
        sum+= (a%10)*pow(b,r);
        a/=10;
        r++;
    }
    r=0;
    while(sum>0)
    {
        r+=sum%c;
        r*=10;
        sum/=c;
    }
    f=r;
    r/=10;
    k=0;
    if(r%10==0)
    {
        cout << "NO";
        return 0;
    }
    while(r>0)
    {
        k+=r%10;
        k*=10;
        r/=10;
    }
    //k/=10;
    if(k==f)
    {
        cout << "YES";
    }else
    {
      cout << "NO";
    }
    //cout << k << endl << f << endl << r;


}
// hal shode 100