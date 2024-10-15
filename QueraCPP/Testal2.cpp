#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout << "enter culumn of matrix : ";
    cin >> m;
    cout << "enter low of matrix : ";
    cin >> n;
    int matrix[m][n];
    cout << "enter first element of your matrix : ";
    cin >> matrix[0][0];
    cout << "enter second element of your matrix : ";
    cin >> matrix[0][1];
    cout << "enter third element of your matrix : ";
    cin >> matrix[1][0];
    cout << "enter forth element of your matrix : ";
    cin >> matrix[1][1]; 

    if(matrix[0][0] * matrix[1][1] -  matrix[0][1] * matrix[1][0] == 0){
        cout << "no inverse avilable";
        return 0;
    }

    cout << matrix[0][0]/(matrix[0][0] * matrix[1][1] -  matrix[0][1] * matrix[1][0] == 0) << " ";
    cout << -matrix[0][1]/(matrix[0][0] * matrix[1][1] -  matrix[0][1] * matrix[1][0] == 0) << endl;
    cout << -matrix[1][0]/(matrix[0][0] * matrix[1][1] -  matrix[0][1] * matrix[1][0] == 0) << " ";
    cout << matrix[1][1]/(matrix[0][0] * matrix[1][1] -  matrix[0][1] * matrix[1][0] == 0);

    

}
