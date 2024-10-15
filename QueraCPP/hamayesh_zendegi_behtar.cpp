#include<iostream>
using namespace std;
int main()
{
  int r,c;
  cin >> r;
  cin >> c;
  if (c<=10)
  {
    cout << "Right" << "\t" << 11-r << "\t" << c;
  }else
  {
    cout << "Left" << "\t" << 11-r << "\t" << 21-c;
  }
  return 0; 
}