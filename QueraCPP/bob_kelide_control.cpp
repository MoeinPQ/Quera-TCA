#include<iostream>
using namespace std;
int main() 
{
    int n,w,x,k,i;
    cin >> n;
    cin >> x;
    cin >> k;
    string array[n];
    for(i=0;i<n;i++)
    {
        cin >> array[i];

    }
    w=--x;
    for(i=0;i<k;i++)
    {
        if(w==n-1)
        {
            w=0;
        }else{
            w++;
        }
    }

    //if(k<n){
        //k-

    //}
    //if(k>=n){
      //  w = n/k ;
        //result = (k/w)-(n-x);

    //}
    cout << array[w];
}