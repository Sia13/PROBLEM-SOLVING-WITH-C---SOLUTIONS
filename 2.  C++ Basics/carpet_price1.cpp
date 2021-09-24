#include <iostream>
using namespace std;

int main()
{
    double cost_per_meter = 2.75;
    double length, extra_length, extra_length_cost, discount, final_cost_of_extraLength, cost_of_10m, cost, total_cost;

    cout<<"\nEnter the length of carpet in meters that ou wish to buy: ";
    cin>>length;
    
    if (length > 10)
    {
        extra_length = length - 10;
        extra_length_cost = extra_length * 2.75;
        discount = extra_length_cost * 15/100;
        final_cost_of_extraLength = extra_length_cost - discount;
        
        cost_of_10m = 10 * 2.75;
        total_cost = final_cost_of_extraLength + cost_of_10m;
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        
        cout<<"TOTAL COST = $"<<total_cost;
    }
    else
    {
        cost = length * 2.75;
        cout<<"Total cost "<<cost;
    }
    return 0;
}
