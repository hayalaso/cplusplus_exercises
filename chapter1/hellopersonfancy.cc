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

  // Prepare the fancy frame
  const string greeting = "Hello, " + name + "!";

  const string spaces(greeting.size(), ' ');
  const string second = "* " + spaces + " *";

  const string first(second.size(), '*');

  // Print fancy frame
  cout << endl;
  cout << first << endl;
  cout << second << endl;
  cout << "* " << greeting << " *" << endl;
  cout << second << endl;
  cout << first << endl;

  return 0;
}
