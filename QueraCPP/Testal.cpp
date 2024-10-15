#include<iostream>
using namespace std;
int main(){
    string F[8];
    string M[8];
    string Ch[8];
    // O-، O+، A-، A+، B-، B+، AB- , AB+
    string arrayBlood[8];
    int z = 0;
    arrayBlood[0] = "AB+";
    arrayBlood[1] = "AB-";
    arrayBlood[2] = "B+";
    arrayBlood[3] = "B-";
    arrayBlood[4] = "A+";
    arrayBlood[5] = "A-";
    arrayBlood[6] = "O+";
    arrayBlood[7] = "O-";
    for(int i=0;i<8;i++){
        F[i] = arrayBlood[i];
        M[i] = arrayBlood[i];
        Ch[i] = arrayBlood[i];
    }

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            for(int h=0;h<8;h++){
                cout << F[i] << " " << M[j] << " " << Ch[h] << endl;
                z++;
            }
        }
    }
    cout << z;
}