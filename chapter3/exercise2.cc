#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;          using std::sort;
using std::cout;         using std::streamsize;
using std::endl;         using std::string;
using std::setprecision; using std::vector;

int main()
{

  cout << "Give me some numbers" ;
  vector<double> numbers;
  double x;

  while (cin>>x)
    numbers.push_back(x);

  //Get the size of the vector
  typedef vector<double>::size_type vec_sz;
  vec_sz size = numbers.size();

  if (size==0) {
    cout << endl << "There are no numbers. Please try again." << endl;
    return 1;
  }

  //sort the numbers
  sort(numbers.begin(),numbers.end());

  //Quartiles are 0.25, 0.5, and 0.75
  vec_sz q1 = size/4;
  vec_sz q2 = size/2;
  vec_sz q3 = size*3/4;

  double Q1, Q2, Q3;

  Q1 = size % 4 == 0 ? (numbers[q1] + numbers[q1-1])/2 : numbers[q1];
  Q2 = size % 2 == 0 ? (numbers[q2] + numbers[q2-1])/2 : numbers[q2];
  Q3 = size % 4 == 0 ? (numbers[q3] + numbers[q3-1])/2 : numbers[q3];
  
  streamsize prec = cout.precision();
  cout << "The list has " << size << " numbers" << endl;
  cout << "The quartiles are:" << endl << setprecision(3)
       << "Q1: " << Q1 << setprecision(prec) << endl
       << "Q2: " << Q2 << setprecision(prec) << endl
       << "Q3: " << Q3 << setprecision(prec) << endl;


  return 0;
}
