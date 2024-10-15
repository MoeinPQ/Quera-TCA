#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    string F[t],M[t],Ch[t];
    bool check = false;
    string result[t];

    for(int i=0;i<t;i++){
        cin >> F[i] >> M[i] >> Ch[i];
        check = false;


        if(Ch[i][0] == 'O'){
            if(Ch[i][1] == '-') result[i] =  "valid";
            else {
                for (int j = 1; j < F[i].length(); j++)
                {
                    if(F[i][j] == '+'){
                        result[i] =  "valid";
                        check = true;
                        break;
                    }

                    for (int k = 1; k < M[i].length(); k++)
                    {
                        if(M[i][k] == '+'){
                            result[i] =  "valid";
                            check = true;
                            break;
                        }
                    }
                    if(check){
                        break;
                    }
                }
                if(!check) {
                    result[i] = "invalid";
                }
            }
        }else{

            if(Ch[i][Ch[i].length() - 1] == '-'){
                int z2=0;
                int f2 = Ch[i].length()-1;
                bool check3 = true;
                for(int j=0;j<f2;j++){
                    check3 = true;
                    for(int h=0;h<F[i].length()-1;h++){
                        if(F[i][h] == Ch[i][j]){
                            z2++;
                            check3 = false;
                            break;
                        }
                    }

                    if(check3){
                        for(int h=0;h<M[i].length()-1;h++){
                            if(M[i][h] == Ch[i][j]){
                            z2++;
                            }
                        }
                    }
                }

                if(z2 == f2) result[i] = "valid";
                else result[i] = "invalid";


            }else{

            int f = Ch[i].length();
            int z = 0;
            bool check2 = true;
            for(int j=0;j<f;j++){
                check2 = true;
                for(int h=0;h<F[i].length();h++){
                    if(F[i][h] == Ch[i][j]){
                        z++;
                        check2 = false;
                        break;
                    }
                }
                if(check2){
                    for(int h=0;h<M[i].length();h++){
                        if(M[i][h] == Ch[i][j]){
                            z++;
                        }
                    }
                }
               
            }

            if(z == f){
                result[i] = "valid";
            }else{
                result[i] = "invalid";
            }


            }
           
        }

    }

    for(int i=0;i<t;i++){
        cout << result[i] << endl;
    }
}

// solved.