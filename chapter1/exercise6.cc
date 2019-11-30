#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "What's your name?";
  string name;
  cin >> name;
  cout << "Hello, " << name;
  cout << endl << "And what is yours? ";
  cin >> name;
  cout << "Hello, " << name;
  cout << "; nice to meet you too!" << endl;
  return 0;
} 
