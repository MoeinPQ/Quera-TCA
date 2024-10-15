#include<iostream>
using namespace std;
int numberOfAlephabet(string a)
{
    int l=0,k=0;
    char t;
    for(int i=0;i< a.length() ;i++)        // chinesh besoorat sooodi.
    {
        for(int j=i+1;j<a.length();j++)
        {
            if(a[i]>a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }

    for(int i=0;i < a.length();i++)
    {
        l=0;
        for(int j=i+1;j < a.length();j++)
        {
            if(a[i] == a[j])
            {
                l++;
            }
        }
        i+=l;
        k++;
    }
    return k;

}

int main()
{
    int n,l,k;
    cin >> n;
    string names[n];
    for(int i=0;i<n;i++)
    {
        cin >> names[i];
    }
    int max=-1;
    for(int i=0;i<n;i++)
    {
        if(numberOfAlephabet(names[i]) > max)
        {
            max = numberOfAlephabet(names[i]);
        }
    }
    cout << max;
}

// hal shode.