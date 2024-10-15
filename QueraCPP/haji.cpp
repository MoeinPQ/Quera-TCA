#include<iostream>
using namespace std;
int main(){
    int a;
    float BMI,c;
    cout << "please enter a number : ";
    cin >> a;
    cout << "please enter a number : ";
    cin >> c;
    BMI= a/(c*c);
    cout << BMI << endl;
    if(BMI<18.5)
    {
        cout << "underweight";
    }else if(BMI<25)
    {
        cout << "normal";
    }else if(BMI<30)
    {
        cout << "overweight";
    }else
    {
        cout << "obese";
    }
}