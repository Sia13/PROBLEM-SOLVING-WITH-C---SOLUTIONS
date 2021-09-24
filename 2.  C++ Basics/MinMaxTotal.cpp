#include<iostream>
using namespace std;

int main()
{   int value, num, max_val, min_val, count = 0;

    cout<<"Enter integer value: ";
    cin>>value;

    do
    {
        cout<<"Enter integer value: ";
        cin>>num;
        if(value > num)
        {
            max_val = value;
            value = max_val;
            if(count == 0)
              min_val = num;
            if(num >= 0 && num < min_val)
              min_val = num;
        }
        else{
            max_val = num;
            if(count == 0)
              min_val = value;
            if(value >=0 && value < min_val)
              min_val = value;
            value = num;
        }
        count++;
    } while (num >= 0);
    cout<<"Maximun value = "<<max_val<<endl;
    cout<<"Minimum value = "<<min_val<<endl;
    cout<<"Total number = "<<count;
    return 0;
}