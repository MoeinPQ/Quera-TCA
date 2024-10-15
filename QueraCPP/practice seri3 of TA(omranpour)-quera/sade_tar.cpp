#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a[4],sum=0,max,min,zarb=1,ave;
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    max=a[0];
    min=a[0];
    for(int i=0;i<4;i++)
    {
        sum+=a[i];
        zarb*=a[i];
        if(a[i]>max)
        max = a[i];
        if(a[i]<min)
        min = a[i];
    }
    ave=sum/4;
    cout << "Sum : " << setprecision(6) << fixed <<  sum << endl << "Average : " << setprecision(6) << fixed << ave << endl;
    cout << "Product : " << setprecision(6) << fixed << zarb << endl << "MAX : " << setprecision(6) << max << endl << "MIN : " << setprecision(6) << min;  
}

// hal shode.