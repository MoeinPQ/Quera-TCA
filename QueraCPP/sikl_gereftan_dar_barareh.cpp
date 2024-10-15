#include<iostream> 
using namespace std;
int main()
{
    int N,a=0,p=221133,b=0,c=0,i,q=321,r=3212;
    cin >> N;
    string emtiaz;
    cin >> emtiaz;
    unsigned long amookey[N];
    int k=p;
    for(i=0;i<N;i++)
    {
        amookey[i]=k%10;
        k/=10;
        if(k==0)
        {
        k=p;
        }
        if(amookey[i]==emtiaz[i]-48)
        {
            a++;
        }
    }
    unsigned long amoonez[N];
    k=q;
    for(i=0;i<N;i++)
    {
        amoonez[i]=k%10;
        k/=10;
        if(k==0)
        {
            k=q;
        }
        if(amoonez[i]==emtiaz[i]-48)
        {
            b++;
        }
    }
    unsigned long amooshir[N];
    k=r;
    for(i=0;i<N;i++)
    {
        amooshir[i]=k%10;
        k/=10;
        if(k==0)
        {
            k=r;
        }
        if(amooshir[i]==emtiaz[i]-48)
        {
            c++;
        }
    }

    int max=a;
    if(b>=max)
    {
        max=b;
    }else if(c>=max)
    {
        c=max;
    }
    cout << max << endl;
    if(a==max)
    {
        cout << "keyvoon" << endl;
    }
     if(b==max)
    {
        cout << "nezam" << endl;
    }
     if(c==max)
    {
        cout << "shir farhad";
    }
}