#include <iostream>
using namespace std;

int main()
{
    char character, gender, genre;
    char food;
    cout<<"Enter your gender(M/F): ";
    cin>>gender;
    if(gender == 'm' || gender == 'M')
    {
      cout<<"Do you like superhero or supervillian(H/V): ";
      cin>>character;
      if(character == 'V' || character == 'v')
        cout<<"You should get a mohawk.";
      else{
        cout<<"What do you prefer steak(A) or sushi(B): ";
        cin>>food;
        if(food == 'A' || food == 'a')
          cout<<"You should get a flat top";
        else
          cout<<"You should get a pompadour";
      }
    }
    if(gender == 'f' || gender == 'F')
    {
      cout<<"Do you like hero or villian(H/V): ";
      cin>>character;
      if(character == 'V' || character == 'v')
        cout<<"You should get a mohawk.";
      else
      {
        cout<<"Choose One: Anime(A) or Sitcom(S): ";
        cin>>genre;
        if(genre == 'A' || genre == 'a')
          cout<<"You should go with bangs.";
        else
          cout<<"You should get a bob.";
      }
    }
    return 0;
}
