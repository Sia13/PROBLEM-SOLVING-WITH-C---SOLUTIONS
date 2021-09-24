#include<iostream>
using namespace std;

int main()
{
    int number_of_people, room_capacity = 20;
    int extra_people;
    char ans;

    do
    {
        cout<<"Enter the number of people in the room:\n";
        cin>>number_of_people;
        cout<<"Maximum room capacity is "<<room_capacity<<" people.\n";

        if(number_of_people != room_capacity)
        {
            if(number_of_people > room_capacity)
            {
                extra_people = number_of_people - room_capacity;
                cout<<"So the meeting cannot be held due to the fire regulations.\n"
                    <<extra_people
                    <<" people should leave the room,\n"
                    <<"in order to continue the meeting.\n";
            }
            else{
                extra_people = room_capacity - number_of_people;
                cout<<"SO it is legal to hold the meeting\n"
                    <<extra_people<<" more people can join.\n";
            }
        }
        else{
            cout<<"SO it is legal to hold the meeting.\n"
            <<"Limit if full. More people cannot join.\n";
        }
        cout<<"Enter 'r' if you want to repeat.\n";
        cin>>ans;
    } while (ans=='r' || ans=='R');
    return 0;
}
