#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int array[n],max=0,k1=0,k2=0,r=0,h=0,max2=0,max3=0;
    for(int i=0;i<n;i++){

        cin >> array[i];
        if(array[i] > max)
        {
        max = array[i];
        k1=i;
        k2=i;
        }
    }

while (n>0)
{

    for(int i=0;i<k1;i++)
    {
        if(array[i] > max2 ){
            max2= array[i];
            r=i;
        }
    }

     if(k1-r > 1){
            cout << "No";
            return 0;
        }

        // cout << "hello";
        // cout << k2;

    for(int i=k2+1;i<n;i++){
        if(array[i] > max3 ){
            max3= array[i];
            h=i;
        }
    }

    if(h-k2 > 1){
            cout << "No";
            return 0;
        }
        // cout << "hellow";

    if(k1 >0)
    k1=r;
    if(k2+1 != n)
    k2=h;
    r=0;h=0;
    max2=0;
    max3=0;

    if((k1==0) && (k2 == n-1))
    break;
    

}

cout << "Yes";


}