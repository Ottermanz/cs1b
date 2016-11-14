// Program: hw5.cpp
// Author: Lee Evans
// Date: 9/27/16

#include <iostream>
#include <fstream>
#include <math.h>
#include <stdio.h>
using namespace std;

void getNum();
void decToBinary(int num);

int num, num1, recu, quot;

int main(){

  getNum();
  cout << "Binary (Read in reverse! Sorry!): ";
  decToBinary(num);

  return 0;
}

void getNum() {

  cout << "Enter a non-negative integer:  ";
  cin >> num;
  num1 = num;

}

void decToBinary(int num) {

  while(num > 0) {
    
    quot = num / 2;
    floor(quot);

    recu = num % 2;
    cout << recu << " ";

    num = quot;

    decToBinary(quot);
    
  }
  
  getchar();

}
