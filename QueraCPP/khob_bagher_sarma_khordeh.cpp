#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[5][20];
    int t=0;
    for(int i=0;i<5;i++)
    {
        cin >> a[i];
    }
    char b[]="HAFEZ",c[]="MOLANA";
    for(int i=0;i<5;i++)
    {
        if((strstr(a[i],b))!=0)
        {
            {
                t++;
                cout << i+1 << " ";
            }
        }else if((strstr(a[i],c))!=0)
        {
            cout << i+1 << " ";
            t++;
        }
    }
    if(t==0)
    cout << "NOT FOUND!";
}
// hal shode va tamam