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

/* Here is an alternative solution to the above ptoblem */

#include<iostream>
#include<iomanip>
#include<numeric>

int main()
{
    double cost_per_meter = 2.75, discount = 15.0/100.0, discount_start_length = 10.0;
    double length;
    std::cout<<"Enter the length of carpet in meters that you want:\n";
    std::cin>>length;
    
    /* std::min returns the smalest of the numbers passed to it */
    double normal_length = std::min(length, discount_start_length);
    double extra_length = length - normal - length;
    
    double total_cost = normal_length * cost_per_meter * (1 - discount);
    
    //Print the result
    std::cout.setf(std::ios::fixed);
    std::cout::precision(2);
    std::cout<<"Total cost is $"<<total_cost<<endl;
}
