#include<iostream>
using namespace std;
int main(){
    int l=0,n;
    cin >> n >> l;
    int g[n],d[n];
    int r[n];
    int totalTime=0,intoTotalTime=0;


    for(int i=0;i<n;i++){
        cin >> d[i];
        cin >> r[i];
        cin >> g[i];
    }

    int checkIsFirstOrNot=0;
    for(int i=0;i<n;i++){
        if(checkIsFirstOrNot != 0){
        intoTotalTime +=  d[i] - d[i-1] ;
        }else{
            intoTotalTime+=d[i];
            checkIsFirstOrNot++;
        }


            if(intoTotalTime < r[i]){
                totalTime += r[i] - intoTotalTime;
                intoTotalTime += r[i] - intoTotalTime;
            }else{
                int k=0;
                int z=0;
                z = intoTotalTime/(g[i]+r[i]);
                k=intoTotalTime%(g[i]+r[i]);
                if(k <= r[i]){
                    totalTime+=(r[i] - k);
                    intoTotalTime +=(r[i] - k);
                }
        }

    }

    cout << totalTime+l;

}

// hal shode.