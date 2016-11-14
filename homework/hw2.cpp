// Program: HW2a.cpp
// Author: Lee Evans
// Date: 9/6/16

#include <iostream>

using namespace std;

void getScores(double data[]);
void showMenu();
char getChoice();
void displayResult(double data[], char a);

int main()
{

  int SIZE = 5;

  char choice;
  double testScores[5];

  getScores(testScores);
  showMenu();
  choice = getChoice();
  displayResult(testScores, choice);

  return 0;
}

void getScores(double data[])
{
  cout << "Enter 5 test scores: \n";

  for (int i = 0; i < 5; i++){
    cin >> data[i];
  }
}

void showMenu()
{
  cout << "\nA.) Calculate the average of the test scores.\n";
  cout << "B.) Display all test scores.\n\n";
}

char getChoice()
{
  char choice;

  cout << "Enter your choice:   ";
  cin >> choice;

  return choice;
}

void displayResult(double data[], char a)
{
  double avg;

  if (a == 'a' || a == 'A'){
    for(int i = 0; i < 5; i++){
      avg += data[i];
    }
    avg = avg/5;
    cout << "The average is " << avg << "\n";
  }

  else if (a == 'b' || a == 'B'){
    cout << "Here are all the test scores: " << endl;
    cout << data[0] << endl;
    cout << data[1] << endl;
    cout << data[2] << endl;
    cout << data[3] << endl;
    cout << data[4] << endl;
    cout << endl;
  }

  else{
    cout << "Invalid entry!";
    cout << endl;
  }
}

