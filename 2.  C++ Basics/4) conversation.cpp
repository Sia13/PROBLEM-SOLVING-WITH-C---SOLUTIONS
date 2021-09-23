#include<iostream>
using namespace std;

int main()
{
  char ans;
  do
  {
    cout<<"Hello user\n"
        <<"Are you having a good day?\nType 'y' for yes and 'n' for no:\n";
    cin>>ans;
    
    if(ans=='y' || ans=='Y')
    {
      cout<<"I'm glad to hear that.\n";
    }
    
    else
    {
      if(ans=='n' || ans=='N')
      {
        cout<<"I hope your day gets better soon :)\n";
      }
    }
  }while(ans!='y' && ans!='Y' && ans!='n' && ans!='N');
  return 0;
}
