#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int M[t][2];
    int R[t];
    for(int i=0;i<t;i++){
        cin >> M[i][0] >> M[i][1];
        if(M[i][0] < M[i][1]) R[i] = -1;
        else{
            if( (M[i][0] - M[i][1] == 1) || (M[i][0] - M[i][1] >= 3) ){
                R[i] = -1;
                continue;
            }

            if(M[i][0]%2 == 0){
                if(M[i][0] == M[i][1]){
                    R[i] = M[i][0]*2;  
                }else{
                    R[i] = (M[i][1] + 1)*2;
                }
            }else{
                if(M[i][0] == M[i][1])
                R[i] =  (M[i][0] * 2)-1;
                else 
                R[i] =  (M[i][1] * 2)+1;
            }
        }
    }

    for(int i=0;i<t;i++){
        cout << R[i] << endl;
    }
}

// solved.