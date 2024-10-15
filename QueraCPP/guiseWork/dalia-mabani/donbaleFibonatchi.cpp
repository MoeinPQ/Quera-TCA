#include<iostream>
using namespace std;

int fibo(int n)
{
    if(n==1)
    return 1;
    int j=1,t=0,k=2,l=1;
    for(int i=1;i<=n;i++){
        if(k+j > n){
            return l+1;
        }else{
            t=k;
            l++;
            k=k+j;
            j=t;
        }
    }
}

int fiboMinez(int n){
    int j=1,t=0,k=2;
    for(int i=1;i<=n;i++){
        if(k+j > n){
            return k;
        }else{
            t=k;
            k=k+j;
            j=t;
        }
    }
}

int main(){

int n;
cin >> n;
// cout << fiboMinez(n);
for(int i=0;;i++){
    cout << fibo(n) << " ";
    n-=fiboMinez(n);
    if(n <= 0)
        return 0;   

}

}
 