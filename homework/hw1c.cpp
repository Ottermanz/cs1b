// Program: HW1c.cpp
// Author: Lee Evans
// Date: 8/29/16

#include <iostream>

using namespace std;

void getTemps(double data[]);
void displayAvg(double data[]);

int main ()
{
  
  double temps[3];
  
  getTemps(temps);
  displayAvg(temps);

  return 0;
}
  
void getTemps(double data[]){
  
  cout << "Enter temperatures for three cities: " << endl;
  
  for (int i = 0; i < 3; ++i)
  { 
    cout << "#" << i+1 << ": ";
    cin >> data[i];
  }
}
  
void displayAvg(double data[]){
  
  cout << "The three values in the arrays are: " << endl;

  for (int i = 0; i < 3; ++i)
  {
    cout << data[i] << endl;
  }
} 
