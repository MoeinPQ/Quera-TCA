#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin >> n >> m;
    int a[n] = {0};
    int f[m][2];
    int mountOfHazf=0;
    int mountOfAdd=0;
    int resultHazf[m][2];
    int v=0;
    for(int i=0;i<m;i++){
        cin >> f[i][0] >> f[i][1];
        for(int j=0;j<n;j++){
            if((j+1 == f[i][0]) ){
                a[j]++;
            }else if(j+1 == f[i][1]){
                a[j+1]++;
            }
         
        }

        //  for(int j=0;j<n;j++){
        //     if((j+1 == f[i][1]) ){
        //         a[j]++;
        //     }
         
        // }

        for(int h=0;h<n;h++){
            if(a[h] == 2){
                mountOfHazf++;
                resultHazf[v][0] = f[i][0];
                resultHazf[v][1] = f[i][1];
                v++;
                break;
            }
        }
    }
    mountOfAdd=(n/2)-1;
    int resultAddHa[mountOfAdd][2];
    int ta = 2;
    for(int i=0;i<(n/2)-1;i++){
        resultAddHa[i][0] = ta;
        resultAddHa[i][1] = ta+1;
        ta+=2; 
    }

    cout << mountOfHazf << " " << mountOfAdd << endl;
    for(int i=0;i<mountOfHazf;i++){
        cout << resultHazf[i][0] << " " << resultHazf[i][1] << endl;
    }

    for(int i=0;i<mountOfAdd;i++){
        cout << resultAddHa[i][0] << " " << resultAddHa[i][1] << endl;
    }
}