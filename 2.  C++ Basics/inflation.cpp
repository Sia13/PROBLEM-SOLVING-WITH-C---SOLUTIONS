#include<iostream>
#include<string>
using namespace std;

int main()
{
    string item;
    double price, rate_of_inflation, inflation;
    int years, count;

    cout<<"\nEnter the name of item: ";
    cin>>item;
    cout<<"Enter the current cost of one "<<item<<": ";
    cin>>price;
    cout<<"Enter the number of years to calculate the expected cost of "<<item<<" after that time: ";
    cin>>years;
    cout<<"Enter the rate of inflation: ";
    cin>>rate_of_inflation;
    inflation = rate_of_inflation / 100;
    count = years;
    while(count>0)
    {
        price = price + (inflation * price);
        count--;
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout<<"After "<<years<<" years price of one "
        <<item<<" will be $"<<price<<endl;
    
    return 0;
}