#include<iostream>
using namespace std;
int main(){

    int k;
    string ramz;
    cin >> k;
    string rollers[k];
    cin.ignore();
    // cin >> ramz;
    getline(cin,ramz);
    int result = 0;
    // cin.ignore();
    for(int i=0;i<k;i++){
        // cin >> rollers[i];
        // cin.ignore();
        getline(cin , rollers[i]);
        for(int j = 0; j < rollers[i].length(); j++){

            if( rollers[i][j] == ramz[i]){
                if(j <= rollers[i].length()/2){
                    result += j;
                }else {
                    result += rollers[i].length() - j;
                }
            }

        }
    }


    cout << result;

}

// hal shode.