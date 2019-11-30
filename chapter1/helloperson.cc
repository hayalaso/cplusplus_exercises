//ask a person for their name
#include <iostream>
#include <string>

using namespace std;

int main()
{
  //ask for the name
  cout<<"Please enter your name: ";
  string name; // define name
  cin >> name; // read into name

  //writing greeting
  cout<<" Greetings, "<<name<<"!"<<endl;
  return 0;
}
