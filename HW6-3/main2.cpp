#include <iostream>

using namespace std;

double powerGen(double Q, double H);
int main(){

  cout << "Input Water Flow Rate" << endl;
  
  
  double volume;

  cout << "Input Height" << endl;
  
  double height;
  powerGen(volume, height);
  
}
double powerGen(double Q, double H)
{
  const double p = 977;  //water density in kg/m^3
  const double g = 9.81; //acceleration due to gravity

  cin >> Q;
  cin >> H;
  double P = p*g*Q*H;

  cout << "Water flow in watts = " << P;

  return P;
  
  

  
}