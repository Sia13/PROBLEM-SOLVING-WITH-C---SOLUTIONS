#include<iostream>
using namespace std;

int main()
{
  int minutes;
  double speed_mph, time_m_s, seconds, decimal_value;
  cout<<"Enter the speed in miles per hour:\n";
  cin>>speed_mph;
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  time_m_s = 60/speed_mph;
  minutes = static_cast<int>(time_m_s);
  decimal_value = time_m-s - minutes;
  seconds = decimal_value * 60;
  cout<<"Result = "<<minutes<<" minutes and "<<seconds<<" seconds per mile\n\n";
  return 0;
}
