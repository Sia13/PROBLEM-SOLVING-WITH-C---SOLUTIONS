#include<iostream>
using namespace std;

int main()
{
    double total_interest = 0, monthly_int_pay, remaining_amt, monthly_interest;
    int total_debt = 1000, monthly_payment = 50, month = 0;
    double yearly_interest = 18;
    monthly_interest = yearly_interest/12;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    while(total_debt > 0)
    {
        monthly_int_pay = total_debt * monthly_interest/100;
        total_interest += monthly_int_pay;
        remaining_amt = monthly_payment - monthly_int_pay;

        total_debt = total_debt - remaining_amt;
        if(total_debt < monthly_payment && total_debt > 0)
        {
            cout<<"\nAmount to be paid last_month = $"<<total_debt<<endl;
        }
        month++;
    }
    cout.precision(1);
    cout<<"Total interest paid = $"<<total_interest<<endl;
    cout<<"Required number of months to pay the full loan = "<<month<<" months\n";
    return 0;
}
 
