#include <iostream>
#include<string>
using namespace std;

int main()
{
    double coeff, initial_length, temp, displacement, ans;
    string material;
    cout<<"Enter the name of material:\n";
    cin>>material;
    cout<<"Enter intial length(in meters): ";
    cin>>initial_length;
    cout<<"Enter change of temperature(in celsius): ";
    cin>>temp;
    cout<<"Enter the coefficient of material for linear expression: ";
    cin>>coeff;
    displacement = coeff * initial_length * temp;
    if(displacement > 0)
      cout<<"The "<<material<<" will expand by "<<displacement<<" meters.";
    if(displacement < 0)
    {   
        ans = displacement;
        ans = ans - (ans * 2);
        cout<<"The "<<material<<" will contract by "<<ans<<" meters";
    }
    return 0;
}
