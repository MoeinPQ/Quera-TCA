#include<iostream>
using namespace std;

static int A,B,m;

int fXk(int k);


int main()
{
    cin >> A >> B >> m;
    int n,l;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        l= ((fXk(i))%6)+1;
        cout << l << endl;
    }

}

int fXk(int k)
{
    int f;
    if(k == 1)
    return B;
    else 
    {
        f=((A*(fXk(k-1))+B)%m);
        return f;
    }

}






// int fXk(int a,int b,int m,int k);
// int main()
// {
//     int A,B,m,n,l;
//     cin >> A >> B >> m;
//     cin >> n;
//     for(int i=1;i<=n;i++)
//     {
//         l=((fXk(A,B,m,i)%6)+1);
//         cout << l << endl;
//     }

// }

// int fXk(int a,int b,int m,int k)
// {
//     int f;
//     if(k == 1)
//     return b;
//     else 
//     {
//         f=((a*(fXk(a,b,m,k-1))+b)%m);
//         return f;
//     }

// }