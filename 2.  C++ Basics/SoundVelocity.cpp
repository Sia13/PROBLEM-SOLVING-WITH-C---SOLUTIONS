#include<iostream>
using namespace std;

int main()
{
    int starting_temp, ending_temp;
    double velocity;

    cout<<"Enter starting temperature: ";
    cin>>starting_temp;
    cout<<"Enter ending temperature: ";
    cin>>ending_temp;

    while(starting_temp <= ending_temp)
    {
        velocity = 331.3 + 0.61 * starting_temp;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
        cout<<"At "<<starting_temp<<" degree Celsius the velocity of sound is "<<velocity<<" m/s\n";
        starting_temp++;
    }
    return 0;
}