#include <iostream>
using namespace std;

int main()
{
    int amount;
    double years, months;
    double rate_of_interest, interest_on_FaceValue, face_value, faceValue_minus_interest, monthly_payment;
    char ans;

    do
    {
        cout<<"Enter the amount you need:\n";
        cin>>amount;
        cout<<"Enter the rate of interest:\n";
        cin>>rate_of_interest;
        cout<<"Enter the duration of loan(in months):\n";
        cin>>months;

        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
        years = months/12;

        interest_on_FaceValue = (rate_of_interest * years)/100;
        faceValue_minus_interest = 1 - interest_on_FaceValue;
        face_value = amount * 1/faceValue_minus_interest;
        monthly_payment = face_value/months;
        
        cout<<"\nFace Value = "<<face_value<<endl;
        cout<<"Monthly payment = "<<monthly_payment;
        cout<<"\nType 'r' if you want to repeat:\n";
        cin>>ans;
    }while(ans=='r' || ans=='R');
    return 0;
}
