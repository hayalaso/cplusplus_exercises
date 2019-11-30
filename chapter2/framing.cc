#include <iostream>
#include <string>

using std::cin; using std::endl;
using std::cout; using std::string;

int main()
{
  //Ask for name
  cout << "Please enter your first name: ";
  string name;
  cin >> name;

  const string greeting = "Hello, " + name + "!";

  //number of blanks surrounding the greeting
  cout << "Enter the number of spaces for framing: "<< endl;
  cout << "Rows: ";
  int r;
  cin >> r;
  const int rowpad = r;
  cout << "Columns: ";
  int c;
  cin >> c;
  const int colpad = c;

  //number of rows and columns to write
  const int rows = rowpad*2 + 3;
  const string::size_type cols = greeting.size() + colpad*2 + 2;

  cout << endl;

  //write rows
  for (int r=0; r!= rows; ++r) {
    string::size_type c = 0;

    while (c != cols) {
      if (r==rowpad + 1 && c == colpad + 1) {
        cout << greeting;
        c += greeting.size();
      } else {
        if (r == 0 || r == rows - 1 || c ==0 || c == cols-1)
          cout << "*";
          //cout << std::string(cols, '*');
        else 
          cout << " ";
        ++c;
      }
    }
    cout << endl;
  }
  return 0;
}
