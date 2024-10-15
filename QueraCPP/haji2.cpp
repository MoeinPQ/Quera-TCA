#include<iostream>
using namespace std;
int main(){
    int n;
    float BMI,m,a;
    cin >> n;
    cin >> m;
    BMI= n/(m*m);
    cout << BMI << endl;
    if(BMI<18.5)
    {
        cout << "Underweight";
    }else if(BMI<25)
    {
        cout << "Normal";
    }else if(BMI<30)
    {
        cout << "Overweight";
    }else
    {
        cout << "Obese";
    }
}