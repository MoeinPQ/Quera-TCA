#include<iostream>
using namespace std;
int sooodi(int a)
{

}
int hazf_tekrari(string b)
{
    string t;
    int w,k=0,i,h=0;
    for(i=0;i< (b.length()-1);i++)
    {
        k=0;
        for(int j=i+1;j< (b.length()-1);j++)
        {
            if((b[i]==b[j]))
            {
                k++;
            }
        }
        if(k==0)
            {
                t[h] = b[i];
                h++;
            }
    }
 return t;

}
int main()
{
    string n;
    cin >> n;
    /*int z1,z2,
    while(z1!=z2)
    {

    }*/
    cout << hazf_tekrari(n);
}
// hal nashde