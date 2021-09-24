#include<iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout<<"Enter three integers: \n";
    cin>>num1>>num2>>num3;
    if(num1 > num2 && num1 > num3)
    {
        if(num2 > num3)
        cout<<"Ascending Oder: "<<num3<<", "<<num2<<", "<<num1;
        else
           cout<<"Ascending Order: "<<num2<<", "<<num3<<", "<<num1;
    }
    
    if(num2 > num3 && num2 > num1)
    {
        if(num3 > num1)
            cout<<"Ascending Order: "<<num1<<", "<<num3<<", "<<num2;
        else
            cout<<"Ascending Order: "<<num3<<", "<<num1<<", "<<num2;
    }
        
    if(num3 > num1 && num3 > num2)
    {
        if(num1 > num2)
            cout<<"Ascending Order: "<<num2<<", "<<num1<<", "<<num3;
        else
            cout<<"Ascending Order: "<<num1<<", "<<num2<<", "<<num3;
    }
    return 0;
}