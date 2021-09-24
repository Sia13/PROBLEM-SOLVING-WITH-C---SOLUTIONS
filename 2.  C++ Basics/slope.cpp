#include<iostream>
using namespace std;

int main()
{
    double x1, y1, x2, y2, m, c;
    cout<<"Enter the coordinates of point one: ";
    cin>>x1>>y1;
    cout<<"Enter the coordinates of point two: ";
    cin>>x2>>y2;

    m = (y2 - y1)/(x2 - x1);
    cout<<"Slope between the above two points = "<<m<<endl;
    c = y1 - m*x1;
    cout<<"Equation of line:\n y = "<<m<<"x + "<<c;
    return 0;
}
