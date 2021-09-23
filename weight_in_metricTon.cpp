/* Q- A metric ton is 35,273.92 ounces. Write a program that will read the weight of a package of breakfast cereal in ounces and output the weight in metric tons
as well as the number of boxes needed to yeild 1 metric ton of cereal. Your program should allow the user to repeat this calculation a often as the user wishes. */



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
