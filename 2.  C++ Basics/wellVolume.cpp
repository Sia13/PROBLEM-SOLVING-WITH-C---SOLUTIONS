#include<iostream>
using namespace std;

int main()
{
    
    double h, cubic_feet, gallons, radius, r;

    cout<<"Enter the radius of well (in inches): ";
    cin>>radius;
    cout<<"Enter the height of well (in foot): ";
    cin>>h;
    r = radius/12;
    cubic_feet = 3.1519 * r * r * h;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout<<"Volume of well = "<<cubic_feet<<" cubic feet.\n";
    gallons = 7.48 * cubic_feet;
    cout<<"So the well holds "<<gallons<<" gallons of water.";
    return 0;
}