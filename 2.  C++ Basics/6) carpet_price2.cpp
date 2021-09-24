#include<iostream>
using namespace std;

int main()
{
    double length, cost_per_meter, discount_length, discount, before_discount_length_cost;
    double discount_price, after_discount_length_cost, remaining_lenght, remainimg_length_cost, total_cost;

    cout<<"Enter the lenght of carpet you want to purchase (in meter):\n";
    cin>>length;
    cout<<"Enter the cost per meter(in rupees): \n";
    cin>>cost_per_meter;
    cout<<"Enter the length applicable for discount:\n";
    cin>>discount_length;
    cout<<"Enter rate of discount:\n";
    cin>>discount;
    before_discount_length_cost = discount_length * cost_per_meter;
    discount_price = before_discount_length_cost * discount/100;
    after_discount_length_cost = before_discount_length_cost - discount_price;

    remaining_lenght = length - discount_length;
    remainimg_length_cost = remaining_lenght * cost_per_meter;

    total_cost = remainimg_length_cost + after_discount_length_cost;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout<<"Total cost = Rs "<<total_cost;
    return 0;
}
