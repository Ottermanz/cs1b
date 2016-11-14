// Program: HW3.cpp
// Author: Lee Evans
// Date: 9/13/16

#include <iostream>

using namespace std;

const int MAX_SECS = 59;
const int MAX_MINS = 59;
const int MAX_HOURS = 23;

struct Time{
  int hours;
  int minutes;
  int seconds;
};

void getTime(Time &time);
bool isTimeValid(Time &time);
void addOneSecond(Time &time);
void displayTime(Time &time);

int main(){

  Time time;

  getTime(time);
  addOneSecond(time);
  displayTime(time);

  return 0;

}

void getTime(Time &time){

  cout << "Enter the time in 'military time', (24-hour format), in the following order: \n";
  cout << "HH:MM:SS, (Hours, Minutes, Seconds). \n";
  cout << "\n";
  cout << "Hours:  ";
  do { 
       cin >> time.hours;
       cin.ignore(1000, '\n');
     } while (isTimeValid(time) != true); // all three while loops check if legit
  cout << "Minutes:  ";
  do { 
       cin >> time.minutes; 
       cin.ignore(1000, '\n');
     } while (isTimeValid(time) != true);
  cout << "Seconds:  ";
  do { 
       cin >> time.seconds;
       cin.ignore(1000, '\n'); 
     } while (isTimeValid(time) != true);
  cout << "\n";

}

bool isTimeValid(Time &time){

  if ((time.hours >=0) && (time.hours <=MAX_HOURS))
    { return true; }
  if ((time.minutes >=0) && (time.minutes <=MAX_MINS))
    { return true; }
  if ((time.seconds >=0) && (time.seconds <=MAX_SECS))
    { 
      return true; 
    }
  else
  { 
    cout << "You're a fart";
    return false;
  }
}

void addOneSecond(Time &time){

  time.seconds += 1;
  if (time.seconds > MAX_SECS){
    time.seconds = 0;
    time.minutes += 1;
  }
  if (time.minutes > MAX_MINS){
    time.minutes = 0;
    time.hours += 1;
  }

}

void displayTime(Time &time){

cout << "After adding one seconds, the time is " << time.hours << ":" << time.minutes << ":" << time.seconds << ". \n";

}
