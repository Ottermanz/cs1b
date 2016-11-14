// Program: hw4.cpp
// Author: Lee Evans
// Date: 9/27/16

#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>
#define clear() printf("\033[H\033[J")


using namespace std;


struct Box
{
  int id;
  float width;
  float height;
  float length;
  Box * next;
};


typedef Box * ptrType;
ptrType head = NULL;


bool insertRecord(ptrType &head);
void displayRecords(const ptrType head);


int main()
{
  char answer;


  do {
    cout << "Enter the specifications of different types of boxes. \n";
    cout << "Include the number of boxes presently in inventory. \n";
    cout << "Enter boxes - (-1 to quit): \n\n";
    bool doAgain = true;


    do {
      doAgain = insertRecord(head);
    } while (doAgain == true);


    cout << "Display all records Y/N?   ";
    cin >> answer;
    if (toupper(answer)=='Y')
      { displayRecords(head); }


    cout << "Do again Y/N?   ";
    cin >> answer;
  } while (toupper(answer)=='Y');


  return 0;
}


bool insertRecord(ptrType & head)
{


  // This is broken, don't know what's wrong
  ptrType temp = new Box;
  bool doAgain = true;
  int idNum = 0;


  cout << setw(10) << "ID:  ";
  cin >> idNum;


  if (idNum == -1)
    doAgain = false;


  else
  {
    temp->id = idNum;
    cin.ignore();


    cout << setw(10) << "Width:  ";
    cin >> temp->width;


    cout << setw(10) << "Height:  ";
    cin >> temp->height;


    cout << setw(10) << "Length:  ";
    cin >> temp->length;


    cout << endl;


    doAgain = true;


    temp->next = head;


    head = temp;
  }
  return doAgain;
}


void displayRecords(const ptrType head)
{
  clear();
  if (head == NULL)
  {
    cout << "List is empty.\n";
    return;
  }
  ptrType temp = head;


  while (temp != NULL)
  {
    cout << fixed << showpoint << setprecision(2);
    cout << setw(10) << "ID#:" << setw(20) << temp->id << endl;
    cout << setw(10) << "Width:" << setw(20) << temp->width << endl;
    cout << setw(10) << "Height:" << setw(20) << temp->height << endl;
    cout << setw(10) << "Length:" << setw(20) << temp->length << endl <<endl;
    temp = temp->next;
  }
}
