#include <iostream>
using namespace std;

int main()
{
    int power, result_int;
    double base, result = 1;
    cout<<"Enter base and exponent respectively: ";
    cin>>base>>power;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    if (power > 0)
    {
        while( power != 0)
        {
            result *= base;
            --power;
        }
        cout<<"Answer = "<<result<<endl;
    }
    
    else
    {
        while( power!=0 )
        {
            result *= base;
            power++;
        }
        cout<<"Answer = 1/"<<result;
    }
    
    return 0;
}
