#include<iostream>
using namespace std;

int main()
{
    double hours_worked, gross_pay, extra_hours, overtime_pay, social_security_tax,
           federal_income_tax, state_income_tax, union_dues, net_takeHome;
    int dependents;
    char ans;
    do{
    cout<<"\nEnter the number of hours worked in a week: ";
    cin>>hours_worked;
    cout<<"Enter the number of dependents the worker had: ";
    cin>>dependents;

    extra_hours = hours_worked - 40;
    overtime_pay = extra_hours * 16.78 * 1.5;
    gross_pay = 40 * 16.78 + overtime_pay;

    cout<<"Gross Pay = $"<<gross_pay<<endl;

    social_security_tax = gross_pay * 6/100;
    cout<<"Social security tax = $"<<social_security_tax<<endl;

    federal_income_tax = gross_pay * 14/100;
    cout<<"Federal Income tax = $"<<federal_income_tax<<endl;

    state_income_tax = gross_pay * 5/100;
    cout<<"State Income Tax = $"<<state_income_tax<<endl;

    union_dues = 10;
    cout<<"Union Dues = $"<<union_dues<<endl;

    gross_pay = gross_pay - (social_security_tax + federal_income_tax + state_income_tax + union_dues);

    if(dependents >= 3)
        net_takeHome = gross_pay - 35;
    else
        net_takeHome = gross_pay;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    
    cout<<"Net take-home pay = $"<<net_takeHome<<endl;
    cout<<"Enter 'r' to repeat:\n";
    cin>>ans;

    }while(ans=='r' || ans=='R');
    return 0;
}