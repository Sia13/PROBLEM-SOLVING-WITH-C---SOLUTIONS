
#include<iostream>
using namespace std;

int main()
{
  double weight_in_ounces, weight_in_metricTon, total_boxes;
  char ans;
  do
  {
    cout<<"Enter the weight of your cereal box in ounces: ";
    cin>>weight_in_ounces;
    weigth_in_metricTon = weight_in_ounces/35273.92;
    total_boxes = 1/weight_in_metricTon;
    cout<<"\nSo your cereal box weighs "<<weight_in_metricTon<<" metric tons.\n";
    cout<<"And the number of boxes that will weigh one metric ton = "<<total_boxes<<endl;
    cout<<"Enter y(for yes) to run the above program again \n otherwise, press n(for no):\n";
    cin>>ans;
  }while(ans=='y' || ans=='Y');
  return o;
}
