// Program: HW1b.cpp
// Author: Lee Evans
// Date: 8/29/16

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double d, e, f;

void getTemps();
double calcAvg();
void displayAvg(double g);

int main()
{

  double avg = 0;
  double city1 = 0;
  double city2 = 0;
  double city3 = 0;

  getTemps();
  avg = calcAvg();
  displayAvg(avg);

  return 0;
}

void getTemps()
{

  cout << "Enter temperature of 3 cities.\n\n";
  cout << "#1:  ";
  cin >> d;
  cout << "#2:  ";
  cin >> e;
  cout << "#3:  ";
  cin >> f;
}

double calcAvg()
{
  
  double avg;
  avg = (d + e + f) / 3;
  return avg;
  
}

void displayAvg(double g)
{

  cout << "The average temperature is " << g << " degrees.\n";

}
